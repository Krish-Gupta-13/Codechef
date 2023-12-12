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
ll count;
  ll n,k;
  cin>>n>>k;
  if(n&1)
    count = n/2+1;
  else
    count = n/2;
//   if(n<2*k){
//     no
//   }
//   else{
    if((count-k)%2==0 && (count-k)>=0 && n>=2*k){
        yes
    }
    else{
        no
    }
//   }
  
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}