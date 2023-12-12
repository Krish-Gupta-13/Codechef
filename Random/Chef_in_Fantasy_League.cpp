//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
int main(){
ll t;
cin>>t;
while(t--){
ll count = 0;
vector<ll> v;
vector<ll> b;
vector<ll> c;
vector<ll> d;
// int arr[100000];
ll n,s;
cin>>n>>s;
ll y=101;
ll u=101;
for(ll i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.pb(ele);
}
for(ll i=0; i<n; i++){
    ll ele1;
    cin>>ele1;
    b.pb(ele1);
}
for(ll i=0; i<n; i++){
    if(b[i]==0){
        // c.pb(v[i]);
        y = min(y,v[i]);
    }
    else{
        // d.pb(v[i]);
        u = min(u,v[i]);
    }
}
// sort(c.begin(), c.end());
// sort(d.begin(), d.end());
if(y+u<=100-s){
// if(c[0]+d[0]<=100-s){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
}
return 0;
}