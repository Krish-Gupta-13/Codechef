//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define F first 
#define S second
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
ll count = 1;
ll count1 = 0;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
ll n;
cin>>n;
vector<ll> v(n);
for(int i=1; i<=n; i++){
    arr[i]=i;
    v[i]=0;
}

int k = n;
for(int i=1; i<=n; i++){
    if(i&1){
        v[n-i-1] = count;
        v[i] = -count;

    }
    else{
        v[n-i-1] = -count;
        v[i] = count;
    }
    // k--;
    count++;
}

if(n%2!=0){
    nm
}
else if(n==2){
    cout<<34<<" "<<-34<<endl;
}
else{
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
}
}
return 0;
}