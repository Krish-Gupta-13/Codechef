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
vector<ll> v;
int arr[100000];
ll n;
cin>>n;
for(ll i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.pb(ele);
    // cin>>arr[i];
}
ll ans = 0;
for(ll i=1; i<n; i++){
    ans = ans + i;
}
unordered_map<ll, ll> m;
for(ll i=0; i<n; i++){
    m[v[i]]++;
}
for(auto i:m){
    if(i.second>1){
        ans = ans - (i.second-1)*i.second/2;
    }
}
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