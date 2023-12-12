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
int n,x;
cin>>n>>x;
if(x>n+1 || x<1-n){
    nm
}
else if(x==0){
    cout<<'-';
    for(int i=1; i<n; i++){
        cout<<'*';
    }
    cout<<endl;
}
else if(x>0){
    for(int i=0; i<x-1; i++){
        cout<<'+';
    }
    for(int i=x-1; i<n; i++){
        cout<<'*';
    }
    cout<<endl;
}
else if(x<0){
    for(int i=0; i<abs(x)+1; i++){
        cout<<'-';
    }
    for(int i=abs(x)+1; i<n; i++){
        cout<<'*';
    }
    cout<<endl;
}
}
return 0;
}