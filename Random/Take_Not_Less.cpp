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
ll count = 1;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
int n;
cin>>n;
int answ;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
map<int, int> m;
int maxi = INT_MIN;
for(int i=0; i<n; i++){
    maxi = max(maxi,arr[i]);
}
for(int i=0; i<n; i++){
    m[arr[i]]++;
}

for(int i=n-1; i>=0; i--){
    if(m[arr[i]]%2==0){
    cout<<"Marichka"<<endl;
    count = 0;
    break;
    }
}
if(count==1)
cout<<"Zenyk"<<endl;
}
return 0;
}