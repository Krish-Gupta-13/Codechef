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
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
void solve(){
ll count = 0;
ll count1 = 0;
// set<ll, greater<ll>> v;
vector<int> v;
// unordered_map<ll, ll> m;
vector<pair<int, int>> m;
int arr[100000];

  ll n,k,l;
  cin>>n>>k>>l;
  for(int i=0; i<n; i++){
    ll x,y;
    cin>>x>>y;
    m.push_back({x,y});
  }
  sort(m.rbegin(), m.rend());
  for(auto i:m){
    if(i.second==l){
        v.push_back(i.first);
    }
  }
  if(v.size()<k){
    nm
  }
  else{
    for(auto i:v){
        if(count1==k){
            break;
        }
        else{
            count = count + i;
            count1++;
        }
    }
    if(count==0){
        nm
    }
    else{
        cout<<count<<endl;
    }
  }
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}