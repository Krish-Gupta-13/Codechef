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
  ll n,m,h;
  cin>>n>>m>>h;
vector<ll> a(n);
vector<ll> b(m);
for(int i=0; i<n; i++){
    cin>>a[i];
}
for(int i=0; i<m; i++){
    cin>>b[i];
}
sort(a.begin(), a.end(), greater<>());
sort(b.begin(), b.end(), greater<>());
int z= min(n,m);
for(int i=0; i<z; i++){
    if(b[i]*h<a[i]){
        count = count + b[i]*h;
    }
    else{
        count+=a[i];
    }
}
cout<<count<<endl;
}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}