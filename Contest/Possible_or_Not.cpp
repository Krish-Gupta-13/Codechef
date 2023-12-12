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
  ll testcases;
  cin>>testcases;
  while(testcases--){
  ll count = 0;
ll count1 = 0;
vector<ll> v;
  ll n,m;
  cin>>n>>m;
  int ans = -1;
  for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
    v.pb(ele);
  }
  for(int i=0; i<n; i++){
    if((v[i]&m)==m){
        ans = ans&v[i];
    }
  }
if(ans==m)
    yes
else
    no 
}
return 0;
}