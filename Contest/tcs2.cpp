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
vector<ll> v;
  ll Total_numbers,Number_of_ones;
  cin>>Total_numbers>>Number_of_ones;
  if(Total_numbers==Number_of_ones){
    cout<<"0"<<endl;
  }
  else if(Number_of_ones==0){
    cout<<Total_numbers<<endl;
  }
  else if(Number_of_ones>=Total_numbers/2){
    cout<<"1"<<endl;
  }
  else{
    ll Difference_ = Total_numbers-Number_of_ones;
    ll Answer_ = Difference_/(Number_of_ones+1);
    if(Difference_%(Number_of_ones+1)!=0)
        Answer_++;
    cout<<Answer_;
  }
}

int main(){
  solve();
return 0;
}