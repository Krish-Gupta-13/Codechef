// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define F first 
// #define S second
// #define pb push_back
// #define ppb pop_back
// #define st sort(v.begin(), v.end());
// #define stg sort(v.begin(), v.end(), greater<>());
// #define fr(i,a,b) for(ll i=a;i<b;i++)
// #define frr(i,a,b) for(ll i=a;i>=b;i--)
// #define pi  3.14 
// #define mod 1e9+7
// // Jda mt soch code krte ja //

// // Maths //
// ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
// ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

// void solve(){
// ll count = 0;
// ll ans = 0;
// ll count1 = 0;
//   ll n;
//   cin>>n;
// vector<ll> v(n);
//   for(int i=0; i<n; i++){
//     cin>>v[i];
//   }

// count = count + v[0] + v[1];
// // cout<<count;
// for(int i=2; i<n; i++){
//     count = count + v[i];
//     if(count%3==1){
//         v[i] = v[i] + 2;
//         ans = ans + 2;
//         count = count + 2;
//     }
//     else if(count%3==2){
//         v[i] = v[i] + 1;
//         ans = ans + 1;
//         count = count + 1;
//     }
//     else{
//         ans = ans + 0;
//     }
//     count = count - v[i-2];
// }
// // cout<<endl;
// // cout<<count<<endl;
// // count = count + v[n-1];
// // if(count%3==1){
// //         // v[i] = v[i] + 2;
// //         ans = ans + 2;
// //         count = count + 2;
// //     }
// //     else if(count%3==2){
// //         // v[i] = v[i] + 1;
// //         ans = ans + 1;
// //         count = count + 1;
// //     }
// //     else{
// //         ans = ans + 0;
// //     }
// // for(auto i:v)
// // cout<<i<<" ";
// cout<<ans<<endl;
// }

// int main(){
//   ll testcases;
//   cin>>testcases;
//   while(testcases--){
//   solve();
//  }
// return 0;
// }





// //   for(int i=0; i<3; i++){
// //     count = count + v[i];
// //   }
// //   int rem = 0;
// //   for(int i=3; i<n; i++){
// //     rem = count%3;
// //     if(rem == 1){
// //         ans = ans + 2;
// //         count = count + 2;
// //     }
// //     else if(rem==2){
// //         ans = ans + 1;
// //         count = count + 1;
// //     }
// //     else{
// //         i = i+2;
// //     }
// //     count = count + v[i] - v[i-3];
// //   }
// //   rem = count%3;
// //   if(rem == 1){
// //         ans = ans + 2;
// //     }
// //     else if(rem==2){
// //         ans = ans + 1;
// //     }
// //   cout<<ans<<endl;




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
#define mod 1e9+7
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

void solve(){
ll count = 0;
ll ans = 0;
ll count1 = 0;
  ll n;
  cin>>n;
vector<ll> q(n);
vector<ll> v;
  for(int i=0; i<n; i++){
    cin>>q[i];
  }
  for(int i=0; i<n; i++){
    v.pb(q[i]%3);
  }

count = count + v[0]%3 + v[1]%3;
// cout<<count;
for(int i=2; i<n; i++){
    count = count + v[i]%3;
    if(count%3==1){
        v[i] = v[i] + 2;
        ans = ans + 2;
        count = count + 2;
    }
    else if(count%3==2){
        v[i] = v[i] + 1;
        ans = ans + 1;
        count = count + 1;
    }
    else{
        ans = ans + 0;
    }
    count = count - v[i-2]%3;
}
// cout<<endl;
// cout<<count<<endl;

// for(auto i:v)
// cout<<i<<" ";
cout<<ans<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}




