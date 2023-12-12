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
ll count = 1;
ll count1 = 0;
// vector<ll> v;
  ll n;
  cin>>n;
// ll arr[n];
vector<ll> arr(n);
  for(ll i=0; i<n; i++){
    cin>>arr[i];
  }
  vector<vector<ll>> v(n, vector<ll>(1, INT_MIN));
  ll x = n-1;
  sort(arr.begin(), arr.end());
  v[0][0] = arr[n-1];
    // cout<<x<<" ";
  for(ll i=n-2; i>=0; i--){
    for(ll j=0; j<v.size(); j++){
        if(v[j][0]>=arr[i]){
            ll a = v[j][0];
            ll b = arr[i];
            v[j][0] = a^b;
            break;
        }
        else{
            v[j][0] = arr[i];
            count++;
            break;
        }
    }
  }
  cout<<count<<endl;
}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}

