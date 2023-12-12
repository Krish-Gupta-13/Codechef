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
bool isprime(ll n){
    for(ll i=2; i<n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

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
ll n;
cin>>n;
if(n<6){
    nm
}
else{
    for(int i=2; i*i<=n; i++){
    if(n%i==0){
        count = i;
        break;
    }
    else{
        count = -1;
    }
}
if(count==-1){
    nm
}
else if(count==n/count){
    nm
}
else{
    cout<<1<<" "<<count<<" "<<n/count<<endl;
}
}
}
return 0;
}