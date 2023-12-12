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
set<int> m;
int arr[100000];
int n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
vector<pair<int, int>> y;
for(int i=0; i<n; i++){
    y.push_back({arr[i], i});
}
sort(y.begin(), y.end()); 
for(int i=0; i<n; i++){
    // if(y[i].first==y[i+1].first){
    //     count++;
    //     i++;
    // }
    // else{
    //     i = i+1;
    // }
    q.pb(y[i].first + y[i].second);
}
// for(auto i:m){
    // cout<<m.end()<endl;
// }
// int a = m[n-1];
// cout<<a<<endl;


// for(int i=0; i<n; i++){
//     a = 
cout<<*max_element(q.begin(), q.end())<<endl;

// }



// cout<<count<<endl;
// int ans = n - count
// for(int i=0; i<n; i++){
// cout<<y[n-1].first + count<<endl;

// }

}
return 0;
}