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
int n;
cin>>n;
string s;
cin>>s;
string x = "1";
int a;
cout<<x[0]<<endl;
// for(int i=0; i<n-1; i++){
//     a = int(x[i])^int(s[i]);
//     x[i+1]=char(a);
// }
for(int i=0; i<n; i++){
    if(x[i]=='1')
    count++;
}
// cout<<x<<endl;
// cout<<count<<endl;
}
return 0;
}













    // if(i==0){
    //     a = 1^int(s[i]);
    // }
    // else{
    //     a = int(x[i+1])^int(s[i]);
    // }
    // char y = char(a);
    // x+=y;
    