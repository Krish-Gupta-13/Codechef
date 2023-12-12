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
ll count1 = 0;
vector<ll> v(3);
vector<ll> q(3);
  for(int i=0; i<3; i++){
    cin>>v[i];
  }
  for(int i=0; i<3; i++){
    cin>>q[i];
  }
  stg
  sort(q.begin(), q.end(), greater<>());
 int a = v[0] + v[1];
 int b = q[0] + q[1];
 if(a>b){
    cout<<"Alice"<<endl;
 }
 else if(b>a){
    cout<<"Bob"<<endl;
 }
 else{
    cout<<"Tie"<<endl;
 }

// int arr[n];
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}