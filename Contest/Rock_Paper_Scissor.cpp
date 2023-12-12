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
#define ppb pop_back
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

void solve(){
ll mod = 1e9+7;
ll count = 0;
ll count1 = 0;
ll draw = 0;
vector<ll> v;
  ll n;
  cin>>n;
  string s,t;
  cin>>s>>t;
  for(int i=0; i<n; i++){
    if(s[i]==t[i]){
        draw++;
    }
    else if(s[i]=='R' && t[i]=='P'){
        count1++;
    }
    else if(s[i]=='R' && t[i]=='S'){
        count++;
    }
    else if(s[i]=='S' && t[i]=='P'){
        count++;
    }
    else if(s[i]=='S' && t[i]=='R'){
        count1++;
    }
    else if(s[i]=='P' && t[i]=='R'){
        count++;
    }
    else if(s[i]=='P' && t[i]=='S'){
        count1++;
    }
  }
  ll ans = 0;
  if(count>count1){
    cout<<0<<endl;
    return;
  }
  if(count1>count)
    ans = ceil(double(count1-count)/2.0);
cout<<ans<<endl;


//   if(count>count1)
//   cout<<0<<endl;
//   else
//   cout<<ceil(double(count1-count)/2.0)<<endl;
//   cout<<ceil(double(count1-count)/2.0)<<endl;
// cout<<count1/2 +1<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}


