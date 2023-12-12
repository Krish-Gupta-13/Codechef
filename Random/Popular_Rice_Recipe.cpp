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
ll count = 0;
ll count1 = 0;
vector<string> v;
vector<ll> q;
set<string> g;
int arr[100000];
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s[n];
        cin>>s[i];
        g.insert(s[i]);
}
for(auto i:g){
    cout<<i<<" ";
}

cout<<endl;
}
return 0;
}