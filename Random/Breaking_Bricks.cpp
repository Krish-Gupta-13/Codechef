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
int a,b,c,d;
cin>>a>>b>>c>>d;
int l = d+b+c;
if(b==c && c==d && a<(b+c)){
    cout<<3<<endl;
}
else if(l%a==0){
cout<<l/a<<endl;
}
else{
    cout<<l/a + 1<<endl;
}
}
return 0;
}
