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
ll sum = 0;
ll count1 = 0;
vector<ll> v;
  ll a, b, k;
  cin>>a>>b>>k;
  priority_queue<int> pq;
  pq.push(a);
  pq.push(b);
  for(int i=1; i<=k; i++){
    if(i&1){
        int p = pq.top();
        pq.pop();
        int q = pq.top();
        pq.pop();
        int x = gcd(p, q);
        if(p<q)
            pq.push(p);
        else
            pq.push(q);
        pq.push(x);
        // cout<<x<<endl;
    }
    else{
        int p = pq.top();
        pq.pop();
        int q = pq.top();
        pq.pop();
        int x = lcm(p, q);
        pq.push(x);
        if(p<q)
            pq.push(p);
        else
            pq.push(q);
   }
  }
  sum = pq.top();
  pq.pop();
  sum = sum + pq.top();
  pq.pop();
  cout<<sum<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}