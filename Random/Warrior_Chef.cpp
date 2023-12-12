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


bool ispossible(ll mid, ll h, vector<ll> &v){
  ll n = v.size();
  for(ll i=0; i<n; i++){
    if(v[i]>h+mid)
      h = h-v[i];
    
    if(h<0)
      return false;
  }
  return true;
}

void solve(){
ll mod = 1e9+7;
ll count = 0;
ll count1 = 0;
  ll n,h;
  cin>>n>>h;
  vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
    count = max(count, v[i]);
  }
  ll s = 0;
  ll e = count;
  while(s<=e){
    ll mid = (s+e)/2;
    if(ispossible(mid, h, v))
      e = mid - 1;
    else  
      s = mid + 1;
  }
  cout<<s+1<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}