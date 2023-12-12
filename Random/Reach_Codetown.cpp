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
// #define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
// Jda mt soch code krte ja //

// Maths //
ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

bool isVowel(char ch){if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')return true; return false;}

void solve(){
ll mod = 1e9+7;
ll count = 0;
ll count1 = 0;
unordered_map<char, int> m;
vector<char> v;
  string s;
  cin>>s;
  string st = "CODETOWN";
  for(int i=0; i<s.size(); i++){
        if(!isVowel(s[1]) || !isVowel(s[3]) || !isVowel(s[5])){
            no
            return;
        }
        if(isVowel(s[i]))
        count++;
  }
  if(count>3)
    no
    else
  yes
  
}

int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }
return 0;
}