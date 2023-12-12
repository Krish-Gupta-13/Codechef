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
ll r,g,b;
cin>>r>>g>>b;
ll k;
cin>>k;
v.pb(r);
v.pb(g);
v.pb(b);
st
cout<<min(r,k-1)+min(g,k-1)+min(b,k-1)+1<<endl;
// if(v[0]>=k){
//     cout<<(k-1)*3 + 1<<endl;
// }
// else if(v[1]>=k){
//     cout<<v[0]*3 + (v[1]-v[0]-1)*2 <<endl;
// }
// else{
//     cout<<v[0]*3 + (v[1]-v[0])*2 + (v[2]-v[1]-v[0])*1 + 1<<endl;
// }
}
return 0;
}