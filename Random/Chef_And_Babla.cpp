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
vector<ll> arr;
vector<ll> q;
// vector<ll> ans;
int ans;
// int arr[100000];
int arr1[100000];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    ll ele;
    cin>>ele;
    arr.pb(ele);
}
int index;
sort(arr.begin(), arr.end());
for(int i=0; i<n; i++){
    if(arr[i]==0){
        ans=-100;
        break;
    }
}
for(int i=0; i<n; i++){
    if(arr[i]>=0){
        count = arr[i];
        index=i;
        break;
    }
}
count1=arr[index-1];
if(count1<0){
    ans = min(count,-(count1));
}
else{
    ans = min(count,count1);
}
if(ans>0)
cout<<ans-1<<endl;
else
nm
}
return 0;
}