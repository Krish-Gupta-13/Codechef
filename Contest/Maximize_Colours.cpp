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
vector<ll> v;
vector<ll> q;
int arr[100000];
int x,y,z;
cin>>x>>y>>z;
v.pb(x);
v.pb(y);
v.pb(z);
st
if(v[0]==0 && v[1]==1){
    cout<<2<<endl;
}
else if(v[0]==0 && v[1]>=2){
    cout<<3<<endl;
}
else if(v[0]==0 && v[1]==0 && v[2]>0){
    cout<<1<<endl;
}
else if(v[0]==0 && v[1]==0 && v[2]==0){
    cout<<0<<endl;
}
else if(v[0]==1 && v[1]==1){
    cout<<3<<endl;
}
else if(v[0]==1 && v[1]>=2){
    cout<<4<<endl;
}
else if(v[0]==2 && v[1]==2 && v[2]>2){
    cout<<5<<endl;
}
else if(v[0]==2 && v[1]==2 && v[2]==2){
    cout<<4<<endl;
}
else if(v[0]>=3){
    cout<<6<<endl;
}
else{
    cout<<1<<endl;
}
}
// }
return 0;
}