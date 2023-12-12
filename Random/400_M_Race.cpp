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
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
float x,y,z;
cin>>x>>y>>z;
float a = 400/x;
float b = 400/y;
float c = 400/z;
if(a>b && a>c){
    cout<<"ALICE"<<endl;
}
else if(b>a && b>c){
    cout<<"BOB"<<endl;
}
else{
    cout<<"CHARLIE"<<endl;
}
}
return 0;
}