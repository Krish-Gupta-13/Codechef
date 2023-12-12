
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());



void solve(){
ll mod = 1e9+7;
ll count = 0;
ll count1 = 0;
  int n;
  cin>>n;
vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  ll sum = accumulate(v.begin(), v.end(), 0);
  bool flag = false;
  for(int i=0; i<n; i++){
    if(v[i]==0)
        continue;
    else if(v[i]>0 && flag==false){
        continue;
    }
    else if(v[i]>0 && flag==true){
        count++;
        flag = false;
    }
    else if(v[i]<0 && flag==false){
        flag = true;
    }
  }
  for(int i=0; i<n; i++){
    count1 = count1 + abs(v[i]);
  }
  if(flag==true)
    count++;
    cout<<count1<<" "<<count<<endl;



}

int main(){
  solve();
return 0;
}