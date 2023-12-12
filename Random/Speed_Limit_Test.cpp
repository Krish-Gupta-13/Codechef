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
ll count = 0;
ll count1 = 0;
vector<int> v;
// vector<int> y;
int arr[100000];
float a,x,b,y;
cin>>a>>x>>b>>y;
float u = a/x;
float i = b/y;
if(u<i){
    cout<<"Bob"<<endl;
}
else if(i<u){
    cout<<"Alice"<<endl;
}
else{
    cout<<"Equal"<<endl;
}
}
return 0;
}