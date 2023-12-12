//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<vector>
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
vector<int> v;
vector<int> b;
int arr[100000];
int n,m;
cin>>n>>m;
for(int i=0; i<m; i++){
    int tt;
    cin>>tt;
    b.pb(tt);
}
for(int i=1; i<=n; i++){
    int ele;
    ele = i;
    v.pb(ele);
   }
    
    
   
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;


// if(v.size()==1){
//     cout<<v[0]<<endl;
//     cout<<-1<<endl;
// }
// else{
//     for(int i=1; i<=v.size(); i=i+2){
//         cout<<v[i]<<" ";
//         // cout<<v[i+1]<<endl;
//     }
//     cout<<endl;
//     for(int i=1; i<=v.size(); i=i+2){
//         cout<<v[i+1]<<" ";
//     }
//     cout<<endl;
// }
}
return 0;
}