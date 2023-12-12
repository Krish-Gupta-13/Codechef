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
ll odd = 0;
ll count1 = 0;
  ll n;
  cin>>n;
vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
    if(v[i]&1)
        odd++;
  }
  double sum = accumulate(v.begin(), v.end(), 0);
  ll x = sum/n;
  double y = double(sum/n);
//   cout<<x<<" "<<y<<endl;
  if(x!=y){
    no
    return;
  }
  for(int i=0; i<n; i++){
    if((abs(x-v[i]))%2==1){
        no
        return;
    }
  }
  yes
































//   ll sum = accumulate(v.begin(), v.end(), 0);
//   st
//   for(int i=0; i<n; i++){
//     if(v[i]==v[0])
//         count1++;
//     if(v[i]&1)
//         odd++;
//   }
//   if(count1==n){
//     yes
//     return;
//   }
//   if(odd!=n){
//     for(int i=0; i<n; i++){
//         if(v[i]&1){
//             no
//             return;
//         }
//     }
//   }
//   int x = sum/n;
//   double y = sum/n;
//   if(x!=y){
//     no
//     return;
//   }
//   if(sum&1){
//     no
// return;
//   }

//     for(int i=0; i<n; i++){
//         if((abs(x-v[i]))&1){
//             no
//         return;
//         }
//     }
//     yes
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}