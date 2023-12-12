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
int count = 0;
  string s;
  cin>>s;
  int n = s.length();
    int start = -1;
    int end = -1;
    bool flag = false;
  for(int i=0; i<n; i++){
    if(s[i]=='@'){
        if(start!=-1){
            end = i;
            if(end-start<2){
                flag = true;
            }
            else{
                start = i;
                end = -1;
            }
        }
        else{
            start = i;
        }
    }
    else{
        continue;
    }
    if(flag==true){
        break;
    }
  }
  if(flag==true || s[n-1]=='@' || s[0]=='@')
    cout<<-1<<endl;
    else{
        for(int i=0; i<n; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                count++;
        }
        cout<<count<<endl;
    }
}


int main(){

  solve();

return 0;
}