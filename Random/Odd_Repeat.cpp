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

ll count1 = 0;
vector<ll> q;
int arr[100000];
ll n,m;
cin>>n>>m;
vector<vector<ll>> v(n, vector<ll>(m, 0));
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>v[i][j];
    }
}
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
// }
unordered_map<int, int> mp;
for(int i=0; i<m; i++){
    ll count = 0;
    ll ind = 0;
    for(int j=0; j<n; j++){
        if(v[j][i]>count){
            count = v[j][i];
            ind = i;
        }
    }
    cout<<ind<<" ";
    mp[ind]++;
}
int ans = 0;
ll count = 0;
for(auto i:mp){
    if(i.second>count){
        ans = i.first;
    }
}
cout<<ans+1<<endl;

}
return 0;
}