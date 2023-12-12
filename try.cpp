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
  int n;
  cin>>n;
vector<ll> v(n);

int result = 0;
map<int, int> m;
for(int i=0; i<n; i++){
    m[v[i]]++;
}
int prev = -1;
vector<int> ans;
for(int i=0; i<n; i++){
    if(m[v[i]]>1){
        if(prev<v[i]){
            ans.push_back(1);
            result++;
            prev = v[i];
            m[v[i]]=0;
        }
        else{
            ans.push_back(-1);
            result++;
            prev = v[i];
            m[v[i]]=0;
        }
    }
}
// return result;
for(auto i:ans)
    cout<<i<<" ";
cout<<endl;
}

int main(){

  solve();
 
return 0;
}