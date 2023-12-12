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
ll count1 = 0;
vector<ll> v;
  ll n;
  cin>>n;
  vector<ll> a(n);
  vector<ll> b(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  for(int i=0; i<n; i++){
    cin>>b[i];
  }
ll count = 0;
  vector<ll> pre(n);
  vector<ll> suf(n);
  pre[0] = a[0];
  suf[n-1] = a[n-1];
  ll ans = 0;
  for(int i=1; i<n; i++){
    pre[i] = __gcd(pre[i-1], a[i]);
  }
  for(int i=n-2; i>=0; i--){
    suf[i] = __gcd(suf[i+1], a[i]);
  }

  for(int i=0; i<n; i++){
    ll curr = b[i];
    if(i>0)
      curr =  __gcd(pre[i-1], curr);
    if(i+1<n)
      curr = __gcd(curr, suf[i+1]);
    ans = max(ans, curr);
  }
  for(int i=0; i<n; i++){
    count = __gcd(count, a[i]);
  }

  ans = max(ans, count);
  cout<<ans<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}