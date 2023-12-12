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
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    // cin>>arr[i];
    ll ele;
    cin>>ele;
    v.pb(ele);
}
sort(v.begin(), v.end(), greater<>());
if(v[0]>n){
    nm
}
else if(v[0]==n && v[1]==n){
    nm
}
else if(v[0]<=n && v[1]<n){
    for(int i=0; i<n; i++){
        count = count+n-i-v[i];
    }
    cout<<count<<endl;
}
else{
    cout<<0<<endl;
}

}
return 0;
}