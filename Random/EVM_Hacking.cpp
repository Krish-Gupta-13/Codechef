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
// vector<ll> q;
int arr[100000];
ll a,b,c,p,q,r;
cin>>a>>b>>c>>p>>q>>r;
ll z = min({a,b,c});
ll x = max({p-a,q-b,r-c});
v.push_back(a);
v.push_back(b);
v.push_back(c);
stg
float qq = (p+q+r)/2;
if((v[0]+v[1]+v[2]+x)> qq){
    yes
}
else{
    no
}

}
return 0;
}