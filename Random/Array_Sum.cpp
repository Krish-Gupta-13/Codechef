//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define F first 
#define S second
#define pb push_back
#define ppb pop_back
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

void solve(){
ll mod = 1e9+7;
ll count = 0;
ll count1 = 0;
vector<ll> v;
  ll n, k;
  cin>>n>>k;
vector<ll> arr(n);
  ll maxi=100000*n;
  maxi-=n/2;
  ll a = n/2;
  if(k&1 && a%2==0){
    nm
    return;
  }
  else if(k%2==0 && a&1){
    nm
    return;
  }
  else if(k<n+n/2 || k>maxi){
    nm
    return;
  }
  else{
    for(int i=0; i<n; i++){
        if(i%2==0)
            arr[i] = 1;
        else    
            arr[i] = 2;
    }
    ll left = k-(n+n/2);
    ll add = left/n;
    ll addone = left%n;
    for(int i=0; i<n; i++){
        arr[i] = arr[i]+add;
    }
    for(int i=0; i<addone; i++){
        arr[i]++;
    }

  }

  for(auto i:arr)
    cout<<i<<" ";
 cout<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}


    // for(int i=0; i<a; i++){
    //     v.pb(1);
    // }
    // for(int i=0; i<a-1; i++){
    //     v.pb(2);
    // }
    // ll b = k-n/2-(n-2);
    // ll c = v[v.size()-1]+b/2;
    // v.pop_back();
    // v.pb(c);
    // v.pb(b/2);
    // if(v[v.size()-2]&1){
    //     v[v.size()-2] = v[v.size()-2]-1;
    //     v[v.size()-1] = v[v.size()-1]+1;
    // }