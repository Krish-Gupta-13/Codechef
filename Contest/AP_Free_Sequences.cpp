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
  ll n;
  cin>>n;
int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        int x = arr[i]+arr[j];
        if(x%2==0){
            v.push_back(x/2);
        }
    }
  }
  for(int i=0; i<v.size(); i++){
    for(int j=0; j<n; j++){
        if(v[i]==arr[j]){
            no
            return;
        }
    }
  }
  yes
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}