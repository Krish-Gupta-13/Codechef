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

bool cmp(pair<string, int>& a,
        pair<string, int>& b)
{
    return a.second < b.second;
}
void solve(){
ll count = 0;
ll count1 = 0;
  ll n;
  cin>>n;
vector<string> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
//   for(auto i:v){
//     cout<<i<<" ";
//   }
  map<string, int> m;
  map<int, string> mp;
  for(int i=0; i<n; i++){
    if(m.find(v[i])!=m.end()){
        m[v[i]] = i;
    }
    else{
        m.insert({v[i], i});
    }
  }
  for(auto i:m){
    mp.insert({i.second, i.first});
  }

//   for(auto i:mp){
//     cout<<i.second<<" ";
//   }
//   cout<<endl;
string ans = "";
  stack<string> s;
  for(auto i:mp){
    s.push(i.second);
  }
  while(!s.empty()){
    string q = s.top();
    s.pop();
    int n = q.size();
    ans+=q[n-2];
    ans+=q[n-1];
  }
  cout<<ans<<endl;
}


int main(){
//   ll testcases;
//   cin>>testcases;
//   while(testcases--){
  solve();
//  }
return 0;
}