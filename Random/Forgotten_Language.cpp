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
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int n,k;
cin>>n>>k;
vector<string> str;
set<string> s;
int ans[n]={0};
for(int i=0; i<n; i++){
    string temp;
    cin>>temp;
    str.pb(temp);
}
for(int i=0; i<k; i++){
    int l;
    cin>>l;
    for(int j=0; j<l; j++){
        string temp;
        cin>>temp;
        s.insert(temp);
    }
}
for(int i=0; i<n; i++){
    for(auto j:s){
        if(str[i]==j){
            ans[i]++;
            break;
        } 
    }
}
for(int i=0; i<n; i++){
    if(ans[i]>0){
        cout<<"YES"<<" ";
    }
    else{
        cout<<"NO"<<" ";
    }
}
cout<<endl;
}
return 0;
}