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
vector<int> v;
// vector<int> b;
int arr[100000];
int x,y;
cin>>x>>y;
int a,b,c;
b = y;
int k = 3*x - 2*y;
// int j = 3*y-2*y;
v.push_back(y);
v.push_back(y);
// v.pop_back(j);
v.push_back(k);
st
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
// if(x==y){
//     cout<<x<<" "<<x<<" "<<x<<" "<<endl;
// }
// else if(k>b){
//     cout<<0<<" "<<y<<" "<<(3*y - b)<<endl;
// }
// else{
//     cout<<k-y<<" "<<y<<" "<<k+y<<endl;
// }
}
return 0;
}