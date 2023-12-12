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
string a, b;
cin>>a>>b;
string s = a+b;
// cout<<str<<endl;
// cout<<s.length()<<endl;
if((s[0]=='b' || s[3]=='b') && (s[1]=='o' || s[4]=='o') && (s[2]=='b' || s[5]=='b')){
    cout<<"yes"<<endl;
}
else if((s[1]=='b' || s[4]=='b') && (s[0]=='o' || s[3]=='o') && (s[2]=='b' || s[5]=='b')){
    cout<<"yes"<<endl;
}
else if((s[0]=='b' || s[3]=='b') && (s[2]=='o' || s[5]=='o') && (s[1]=='b' || s[4]=='b')){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
}
return 0;
}