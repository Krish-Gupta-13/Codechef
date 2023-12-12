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
int n,m;
cin>>n>>m;
if(n%2!=0 && m%2!=0){
    cout<<((n/2)+1)*((m/2)+1)<<endl;

}
else if(n%2==0 && m%2!=0){
    cout<<(n/2)*((m/2)+1)<<endl;

}
else if(n%2!=0 && m%2==0){
    cout<<((n/2)+1)*(m/2)<<endl;

}
else{
    cout<<(n/2)*(m/2)<<endl;
}
}
return 0;
}