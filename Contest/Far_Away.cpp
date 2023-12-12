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
for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
    q.pb(ele);
    // cin>>arr[i];
}
// int p;
for(int i=0; i<n; i++){
    if(abs(q[i]-m) > abs(q[i]-1)){
        v.pb(abs(q[i]-m));
    }
    else{
        v.pb(abs(q[i]-1));
    }
    count = count + v[i];
}
cout<<count<<endl;
}
return 0;
}