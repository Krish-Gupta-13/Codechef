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
ll count = 1;
ll count1 = 0;
vector<ll> q;
// int arr[100000];
ll n,m;
cin>>n>>m;
vector<ll> v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
st
for(int i=0; i<n-1; i++){
    if(v[i]!=v[i+1]){
        count++;
    }
}
if(count<m){
    yes
}
else{
    no
}
}
return 0;
}