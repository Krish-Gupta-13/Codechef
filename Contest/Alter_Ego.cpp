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
#define stg sort(ans.begin(), ans.end(), greater<>());
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
ll odd = 0;
ll even = 0;
  ll n;
  cin>>n;
vector<ll> v(n);
vector<ll> o;
vector<ll> e;
  for(int i=0; i<n; i++){
    cin>>v[i];
    if(v[i]&1){
        o.push_back(v[i]);
        odd++;
    }
    else{
        e.push_back(v[i]);
        even++;
    }
  }
  int k = 0;
  vector<ll> ans(n);
  if(odd&1){
    nm
    return;
  }
  else{
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    for(int i=0; i<e.size()/2; i++){
        ans[k] = ((abs(e[i]+e[e.size()-i-1]))/2);
        ans[n/2+k] = ((abs(e[i]-e[e.size()-i-1]))/2);
        k++;
    }
    for(int i=0; i<o.size()/2; i++){
        ans[k] = ((abs(o[i]+o[o.size()-i-1]))/2);
        ans[n/2+k] = ((abs(o[i]-o[o.size()-i-1]))/2);
        k++;
    }

  for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;
  }
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}


