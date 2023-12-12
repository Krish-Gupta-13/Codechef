
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
void solve(){
ll count = 0;
ll count1 = 0;
ll mod = 1e9+7;
vector<ll> v;
int arr[100000];
  ll n;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]%2==0)
        count++;
  }
  ll ans = 1;
  for(int i=1; i<=count; i++){
    ans = (ans*2)%mod;
  }
  if(n==count)
  ans--;
  cout<<ans<<endl;

}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}