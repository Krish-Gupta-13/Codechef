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
  ll count2 = 0;
ll count1 = 0;
vector<ll> v;
  ll n;
  cin>>n;
int arr[n];
int arr1[n];
  for(ll i=1; i<=n; i++){
    cin>>arr[i];
  }
  for(ll i=1; i<=n; i++){
    arr1[i]=pow(2,i-1);
  }
  for(ll i=1; i<=n; i++){
    v.push_back(arr[i]*arr1[i]);
  }
 vector<ll> ans;

for(ll i=0; i<n; i++){
    ll count = 0;
    for(ll j=i; j<n; j++){
        count = count + v[j];
        if(count>0){
            count1++;
        }
        else{
            count2++;
        }
        // ans.push_back(count);
    }
}

//  subset(ans, 0, n, 0, v);


//   for(auto i:ans){
//     cout<<i<<" ";
//   }
//   cout<<endl;
//  for(auto i:ans){
//     if(i>0){
//         count2++;
//     }
//     else if(i<0){
//         count1++;
//     }
//  }
 cout<<abs(count2-count1)<<endl;
 }
return 0;
}