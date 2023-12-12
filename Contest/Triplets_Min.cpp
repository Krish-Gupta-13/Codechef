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
#define st sort(ans.begin(), ans.end());
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
  ll n, q;
  cin>>n>>q;
vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
multiset<pair<ll, ll>> m;
for(int i=2; i<n; i++){
    m.insert({v[i], (i*(i-1)/2)});
}

vector<ll> pre(n-2);
int j = 0;
for(auto i:m){
  if(j==0)
    pre[j] = i.second;
  else
    pre[j] = pre[j-1] + i.second;
  j++;
} 
for(int i=0; i<q; i++){
    ll x=0;
    cin>>x;
    int count = 0;
    auto y = lower_bound(pre.begin(), pre.end(), x) - pre.begin();
    auto it = next(m.begin(), y);
    int aa = it->first;
    cout<<aa<<endl;
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



