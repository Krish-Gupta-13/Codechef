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
int arr1[100000];
  ll m,n;
  int j =0;
  cin>>m>>n;
  if(n>m){
    no
    return;
  }
  if(m==n){
    yes
    return;
  }
  if(m&1){
    no
    return;
  }
  while(m%2==0){
    m/=2;
    }
 if(n%m==0)
 yes
 else
 no 
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}