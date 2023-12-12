//Bit_Optimizer
 
//Hello!! Stalker---->STOP STALKING :)
 
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <chrono>
#include <complex>
#define endl "\n"
#define sz(a) (int)((a).size())
#define ll long long
#define lli long long int
#define vi vector<int>
#define vs vector<string>
#define vll vector<ll>
#define vvi vector < vi >
#define vpll vector<pair<ll,ll>>
  #define pii pair<int,int>
  #define mii map<int,int>
  #define pll pair<ll, ll>
  #define PI 3.141592653589793238462    //double PI=2*asin(1.0);
  #define mod 1000000007
  // #define p 1000000000000000001
  #define INF 10000007
  #define all(c) c.begin(),c.end()
  #define mp(x,y) make_pair(x,y)
  #define mem(a,val) memset(a,val,sizeof(a))
  #define eb emplace_back
  #define f first
  #define s second
  #define clz __builtin_clz
  #define clzll __builtin_clzll
  #define ctz __builtin_ctz
  #define ctzll __builtin_ctzll
  #define pcount __builtin_popcount
  #define pcountll __builtin_popcountll
  #define pb push_back
  #define ppb pop_back
  #define pf  push_front
  #define ppf pop_front
  #define rep(i,a,b) for(ll i=a;i<b;i++)
  #define repe(i,a,b) for(ll i=a;i<=b;i++)
  #define dep(i,a,b) for(ll i=a; i>=b; i--)
  #define yes cout<<"YES"<<endl
  #define no cout<<"NO"<<endl
  #define dne cout<<-1<<endl

 
 
  using namespace std;
  
  
    // int x = j, y = n - i - 1; 
                // int x1 = n - i - 1, y1 = n - j - 1; 
                // int x2 = n - j - 1, y2 = i; 


  const ll inf = 1e9 + 7;
  // vi isprime(10000000 , 1);
  // vi g(10000000, 0);
  
  //***********************************************************************************************
//Hello!! Stalker---->STOP STALKING :)
 
  //Euclid's algorithm----O(logN)
  ll gcd(ll a, ll b) { if (b == 0) {return a;} return gcd(b, a % b);}
 
//Hello!! Stalker---->STOP STALKING :)
  //LCM
  ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
 
//Hello!! Stalker---->STOP STALKING :)
  //Prime factorisation----O(sqrt(n))
  vpll primefact(ll n)  { vpll pfact; 
  for(ll i=2; i*i<=n; i++) if(n%i==0){ll cnt=0; while(n%i==0) {cnt++; n/=i;} pfact.pb({i,cnt});}
  if(n>1) pfact.pb({n,1});  return pfact; }
 
//Hello!! Stalker---->STOP STALKING :)
  //Binary Exponentiation(recursive)---divide & conquer-----> O(log b)
  ll powerRec(ll a, ll b) { 
  if(b==0) return 1;
  ll store = powerRec(a, b/2);
  if(b&1) {return (a* ((store*store) %mod)) %mod;} else{ return (store*store) %mod;} }
 
//Hello!! Stalker---->STOP STALKING :) 
  //Binary Exponentiation(iterative)---divide & conquer-----> O(log b)
  ll powerIter(ll a, ll b){
    ll ans=1;
    while(b){ if(b&1) { ans=(ans*a);} a=(a*a); b>>=1;} return ans;
  }
 
//Hello!! Stalker---->STOP STALKING :)
  // Sieve of Erastosthenes---> O(n* log(logn))
   vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; 
  for (int i = 2; i <= n; i++)
  if (arr[i] == 0) {vect.push_back(i); 
  for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
 
//Hello!! Stalker---->STOP STALKING :)
  //sum_of_digits
  ll sum_of_digits(ll n) {ll sum=0; while(n>0) {sum+=n%10; n/=10; } return sum;}
 
//Hello!! Stalker---->STOP STALKING :)
  // Prime or not-----O(sqrt(n))
  bool isPrime(ll n)
  {if(n==1) return false; for(ll i=2; i*i<=n; i++){ if(n%i==0) return false;} return true;}
 
//Hello!! Stalker---->STOP STALKING :)
  //Perfect square or not----->O(1)
  bool prfSq (ll n){ if(ceil(double(sqrt(n)) == floor(double(sqrt(n))))){ return 1; }else{ return 0;}}
 
//Hello!! Stalker---->STOP STALKING :)
  //factorial of a no.----->O(n)
  ll fact(ll n)
  {
    if(n==0)
      return 0;
    else
    {
      ll factorial=1;
    for(ll i=1; i<=n; i++)
    {
      factorial=(factorial*i)%mod;
 
    }
    return factorial;
  }
  }
 
 
//Hello!! Stalker---->STOP STALKING :)
  // regulr bracket string or not
  bool regular(string a)
  {
    ll cnt=0;
    for(ll i=0; i<a.length(); i++)
    {
      if(a[i]=='(')
        cnt++;
      else
        cnt--;
      if(cnt<0)
        return false;
    }
 
    if(cnt>0)
      return false;
    else
      return true;
  }
 
//Hello!! Stalker---->STOP STALKING :)
  //Reverse a number
  vector<int> reverse_no(ll n)
  {
    vi v;
    ll ans=0, rem;
    while(n != 0) {
    rem = n % 10;
    v.pb(rem);
    ans = ans * 10 + rem;
    n /= 10;
  }
  return v;
  }
  //**************************************************************************************************
 
//Hello!! Stalker---->STOP STALKING :)
 ll countPrimes(ll n) {
        if(n<2) return 0;
        int count=0;
        vector<bool> primes(n,1);
        primes[0] = false;
        primes[1] = false;
        for(ll i=2;i<n;i++)
        {
            if(primes[i])
            {
                count++;
                for(ll j=i*i;j<n;j+=i)
                    primes[j]=0;
            }
        }
        
        return count;
    }
 
//Hello!! Stalker---->STOP STALKING :)
    int countDigit(int n)
{
 
    int count = 0;
 
    while (n != 0) 
 
    {
 
        n = n / 10;
 
        ++count;
 
    }
 
    return count;
}
 
//Hello!! Stalker---->STOP STALKING :)
// number is power of 2 or not
 bool check(ll n)
 {
  if(n==0)
    return false;
  return (ceil(log2(n)) == floor(log2(n)));
 }
 
 ll find_ncr(ll n, ll r)
 {
  ll ans=fact(n)/(fact(r)*fact(n-r));
  return ans;
 }
 //************************************************************************************
 
 
//**************************************************************************************
 
//Hello!! Stalker---->STOP STALKING :)
 bool ispalindrome(string s)
{
  ll i=0, j=s.length()-1;
  while(i<=j)
  {
    if(s[i]!=s[j])
      {return false;  break;}
    i++;
    j--;
  }
  return true;
}
 
  
  void calculate()
  {
    
  }
  
 
 
  // bool comp()
  // {
    
  // }
 
 //*******************************************************************************************
   
 // ***************************************************************
 
 
//Hello!! Stalker---->STOP STALKING :)
int highestPowerof2(int n)
{
   int p = (int)log2(n);
   return (int)pow(2, p);
}
//**************************************************************************
 ll getPairs(vi vec, ll n, double val)
{
  // cout<<k<<endl;
    map<double, double> mp;
    double res = 0;
    rep(i,0,n)
     {
      double check=val-vec[i];
        if (mp.find(check) != mp.end()) {
            res += mp[check];
        }
        mp[vec[i]]++;
    }
    return res;
}
 
 
 
//Hello!! Stalker---->STOP STALKING :)
 
 
const ll N = 510;
 
 
  string findTime(string T, int K)
{
   
    // convert the given time in minutes
  string ans="";
    int minutes = ((T[0] - '0')
                       * 10
                   + T[1] - '0')
                      * 60
                  + ((T[3] - '0')
                         * 10
                     + T[4] - '0');
   
    // Add K to current minutes
    minutes += K;
   
    // Obtain the new our
    // and new minutes from minutes
    int hour = (minutes / 60) % 24;
   
    int min = minutes % 60;
   string c=to_string(hour);
    // Print the hour in appropriate format
    if (hour < 10) {
      
        ans+="0";
        ans+=c;
    }
    else {
        ans+=c;
    }
   string w=to_string(min);
    // Print the minute in appropriate format
    if (min < 10) {
      
        ans+="0";
        ans+=w;   
         }
    else {
        ans+=w;
    }
    return ans;
}

 
 bool isDiv11(string num){
   int n = num.length();
   long odd_sum = 0, even_sum = 0;
   for(int i = 0; i < n; i++){
      if(i % 2 == 0){
         odd_sum += num[i] - '0';
      } else {
         even_sum += num[i] - '0';
      }
   }
   if(odd_sum == even_sum)
      return true;
      return false;
}
 


 
  
    void build(ll ind, ll low, ll high, ll arr[], ll seg[])
    {
      if(low==high)
      {
        seg[ind]=arr[low];
        return;
      }
 
      ll mid=(low+high)>>1;
      build(2*ind+1,low,mid,arr,seg);
      build(2*ind+2,mid+1,high,arr,seg);
      seg[ind]=max(seg[2*ind+1] , seg[2*ind+2]);
    }

    ll query(ll ind, ll low, ll high, ll l, ll r, ll seg[])
    {
      // No overlap
      // l r low high or low high l r
      if(r<low || high<l) return INT_MIN;

      // Complete overlap
      // l low high r
      if(low>=l && high<=r) return seg[ind];

      ll mid=(low+high)>>1;
      ll left=query(2*ind+1, low, mid, l, r, seg);
      ll right=query(2*ind+2, mid+1, high, l, r, seg);
      return max(left,right);
    }
 
 
 
bool isvowel(char x)
{
  int p=int(x);
    if (x == 97 || x == 101 || x == 105 ||
                   x == 111 || x == 117)
        return true;
    else
        return false;
}
 
//



  
  int main()
  {
    
    ll mini=sum_of_digits(707);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    std::ios::sync_with_stdio(false);
    // // cin.ignore(); must be there when using getline(cin, s)
    ll T;
    cin>>T;
    
    // T=1;
    
    ll monk, sid=1;

 
    //Hello!! Stalker---->STOP STALKING :)
     
  while(T--)        
  {
    
   
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a=0;
    rep(i,1,n)
    {
      if(s[i]=='1' && s[i-1]=='0') a++;
    }

    if(s[0]=='1') a++;
    if(s[n-2]=='0') a++;
    cout<<a<<endl;
    


  }
   return 0;
 }
 
  //Hello!! Stalker---->STOP STALKING :)
 //This is Robust_Monk here....and I am trying my best to do O(N!) in O(1) :)
  
 


 // ll n,q;
 //    cin>>n>>q;
 //    ll a[n];
 //    rep(i,0,n)
 //    cin>>a[i];

 //    ll pre[n];
 //    pre[0]=a[0];
 //    rep(i,1,n)
 //    pre[i]=max(pre[i-1],a[i]);
 //    ll mini=*min_element(a,a+n);
 //    ll maxi=*max_element(a,a+n);

 //    ll min_ind=-1, max_ind=-1;

 //    rep(i,0,n)
 //    {
 //      if(a[i]==mini) min_ind=i+1;
 //      if(a[i]==maxi) max_ind=i+1;
 //    }

    
 //    while(q--)
 //    {
 //      ll x, r;
 //      cin>>x>>r;

      
      
 //      ll upper=upper_bound(pre,pre+n,a[x-1])-pre;
 //      upper++;
 //      // cout<<upper<<" "<<max_ind<<endl;
 //      if(x==min_ind)
 //        cout<<0<<endl;
 //      else if(x==max_ind)
 //      {
 //        ll p=max_ind-1;
        
 //        cout<<min(max(0LL,r-p+1),r)<<endl; 
 //      }
 //      else if(upper<x)
 //        cout<<0<<endl;
 //      else
 //        cout<<min(r,upper-x-1)<<endl;

 //    }







#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int count = 0;
     string s;
     cin>>s;
     int b = s.length();
     for(int i=0; i<n-1; i++){
        if(s[i]=='0' && s[i+1]=='1'){
            count++;
        }
        else{
       count = count;
        } 
     }
     if(s[0]=='1' && s[n-2]=='0'){
        cout<<count+2<<endl;
     }
     else if(b==1){
        cout<<"1"<<endl;

     }
     else if(s[0]=='1' && s[n-2]!='0'){
        cout<<count+1<<endl;
     }
     else if(s[0]!='1' && s[n-2]=='0'){
        cout<<count+1<<endl;
     }    
     else{
        cout<<count<<endl;
     }
}
return 0;
}

