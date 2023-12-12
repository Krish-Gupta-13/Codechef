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
ios_base::sync_with_stdio(false);
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll a,b;
cin>>a>>b;
ll c = a+b;
for(int i=2; i<=c/2; i++){
    if(c%i==0){
        count = 1;
        // break;
        continue;
    }
}
if(count==1){
    cout<<"Bob"<<endl;
}
else{
    cout<<"Alice"<<endl;
}
}
return 0;
}