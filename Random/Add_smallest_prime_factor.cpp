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
int n,m;
cin>>n>>m;
int sd;
if(n%2==0){
    if(m%2==0){
        cout<<(m-n)/2<<endl;
    }
    else{
        cout<<(m-n)/2+1<<endl;
    }
}
else{
    for(int i=3; i<=n; i++){
        if(n%i==0){
            sd = i;
            break;
        }
    }
    n = n+sd;
    if(m%2==0){
        cout<<(m-n)/2 +1<<endl;
    }
    else{
        cout<<(m-n)/2 +2<<endl;

    }
}
}
return 0;
}