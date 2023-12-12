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
// vector<ll> v;
  ll n;
  cin>>n;
  vector<string> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  for(int i=0; i<n; i++){
    if(v[i]=="A" || v[i]=="O" || v[i]=="AB"){
        count++;
    }
    if(v[i]=="B" || v[i]=="O" || v[i]=="AB"){
        count1++;
    }
  }
  cout<<max(count, count1)<<endl;
}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}