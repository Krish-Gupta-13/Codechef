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
int main(){
ll t;
cin>>t;
while(t--){
ll count1 = -2;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll count;
ll n,y;
cin>>n>>y;
for(ll i=0; i<n; i++){
    ll wlw;
    cin>>wlw;
    v.pb(wlw);
}
    count = v[0];
    for(ll i=1; i<n; i++){  
        count = count | v[i];
     }
for(ll i=0; i<=y; i++){
    if((count|i)==y){
     count1=i;
     break;
    }
}
if(count1!=-2){
cout<<count1<<endl;
  }
  else{
    nm
  }
}
return 0;
}
