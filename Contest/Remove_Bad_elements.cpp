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
ll n;
cin>>n;
for(int i=0; i<n; i++){
    // ll wlw;
    // cin>>wlw;
    // v.pb(wlw);
    cin>>arr[i];
}
// void countfreqency(int arr[], int n){
    // vector<int> v;
        int d,e;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        }
        for(auto x:mp){
            // d = x.first;
            e = x.second;
        q.push_back(e);
    }
    // stg
sort(q.begin(), q.end(), greater<>());
    for(int i=1; i<q.size(); i++){
        count = count + q[i];
    }
    cout<<count<<endl;

// for(int i=0; i<n; i++){
//     if(v[i]==v[i]){
//         count++;
//     }
//     else{
//         q.pb(count);
//         count = 1;
//     }
// }
// for(int i=1; i<q.size(); i++){
//     count1 = count1 + q[i]; 
// }
// cout<<n-count1<<endl;
}
return 0;
}