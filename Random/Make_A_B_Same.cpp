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
bool check(int arr[], int arr1[], int n, int count){
    if(arr[0]!=arr1[0] || arr[n-1]!=arr1[n-1]){
        return false;
    }

    for(int i=0; i<n; i++){
    if(count==n){
        return false;
    }
    if(arr[i]==1 && arr1[i]==0){
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
int n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]==0){
        count++;
    }
}
for(int i=0; i<n; i++){
    cin>>arr1[i];
}
if(check(arr, arr1, n, count)==true)
yes
else
no
}
return 0;
}