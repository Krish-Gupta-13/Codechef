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
long long calculate(long long p, long long q){
    long long mod = 1000000007, exp;
    exp = mod - 2;
    while (exp){
        if (exp & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        exp >>= 1;
    }
    return p;
}
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> w;
int arr[100000];
int arr1[100000];
ll n;
cin>>n;
for(ll i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.pb(ele);
    ll wlw;
    cin>>wlw;
    w.pb(wlw);
}

unordered_map<ll, ll> m;
unordered_map<ll, ll> mm;
for(ll i=0; i<n; i++){
    m[v[i]]++;
}
for(ll i=0; i<n; i++){
    mm[w[i]]++;
}
long long q=1;
long long p=1;
for(ll i=1; i<=n; i++){
    q = q*i;
}
for(auto z:m){
    ll c = 1;
    for(ll i=1; i<=z.second; i++){
        c = c*i;
    }
    q = q/c;
}
for(auto z:mm){
    ll c = 1;
    if(z.second>1)
    for(ll i=1; i<z.second; i++){
        c = c*i;
    }
    p = c;
}

cout<<calculate(p,q)<<endl;
}

int main(){
solve();
return 0;
}