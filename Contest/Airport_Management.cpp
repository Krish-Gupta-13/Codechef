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


int findPlatform(int arr[], int dep[], int n){
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int ans = INT_MIN;
    	int count = 1;
    	int i = 1;
    	int j = 0;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        count++;
    	        i++;
    	    }
    	    else{
    	        count--;
    	        j++;
    	    }
    	    ans = max(ans, count);
    	}
    	return ans;
    }

void solve(){
ll count = 0;
ll count1 = 0;
  ll n;
  cin>>n;
int v[n];
int q[n];
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  for(int i=0; i<n; i++){
    cin>>q[i];
  }
  map<ll, ll> m;

  for(int i=0; i<n; i++){
    m[v[i]]++;
  }
  for(int i=0; i<n; i++){
    m[q[i]]++;
  }
  for(auto i:m){
    count=max(count, i.second);
  }
  cout<<count<<endl;
//   cout<<findPlatform(v, q, n)<<endl;
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}