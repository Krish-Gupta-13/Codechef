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
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
unordered_map<int, int> m;
int arr[3];
  for(int i=0; i<3; i++){
    cin>>arr[i];
  }
//   for(int i=0; i<3; i++){
//     m[arr[i]]++;
//   }
//   for(auto i:m){
//     if(i.first==1){
//         if(i.second>1){
//             cout<<"Not now"<<endl;
//         }
//         else{
//             cout<<"Water filling time"<<endl;
//         }
//     }
//     else{
//         if(i.second<2){
//             cout<<"Not now"<<endl;
//         }
//         else{
//             cout<<"Water filling time"<<endl;
//         }
//     }
//   }
  for(int i=0; i<3; i++){
    if(arr[i]==1){
        count++;
    }
  }
  if(count<2){
    cout<<"Water filling time"<<endl;
  }
  else{
    cout<<"Not now"<<endl;
  }
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}