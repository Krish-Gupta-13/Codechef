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
#define mod 1e9+7
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

void solve(){
ll count = 0;
ll count1 = 1;
ll sum = 0;
  ll n, m;
  cin>>n>>m;
vector<ll> v(m);
  for(int i=0; i<m; i++){
    cin>>v[i];
    count+= n - v[i];
  }
cout<<max(0LL, n-count)<<endl;
//   int x = 0;
//   if(count%n==0)
//     x = count/n;
//   else
//     x = (count/n)+1;

//   if(x==m){
//     if(count%n==0)
//         cout<<count/n<<endl;
//     else
//         cout<<count%n<<endl;
//   }
//   else
//     cout<<0<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}