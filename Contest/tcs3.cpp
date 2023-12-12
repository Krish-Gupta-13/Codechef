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
int count = 0;
ll count1 = 0;
  int n;
  cin>>n;
vector<int> v(n);
vector<int> q(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
for(int i=0; i<n; i++){
    cin>>q[i];
}
int k;
cin>>k;
string s; getline(cin, s);
    int num = 0;
    string str = "";
    vector<pair<string, int>> m;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            m.push_back({str, num}), num = 0, str="";
        }
        else{
            if(s[i]>='0' && s[i]<='9')
                num = num*10 + (s[i]-'0');
            else if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z'))
                str+=s[i]; 
        }
        // cout<<num<<" "<<str<<endl;
    }
    m.push_back({str, num});
    
    for(auto i:m){
        cout<<i.second<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        if(q[i]==1)
            count = count + v[i];
    }
    int maxi = count;
    for(int i=0; i<n; i++){
        int sum = 0;
        if(q[i]==0){
            for(int j=i; j<n; j++){
                if(q[j]==0)
                    sum = sum + v[j];
            }
        }
        maxi = max(maxi, sum+count);
    }
    int sz = m.size();
    int mini = INT_MAX;
    for(int i=0; i<sz; i++){
        if(maxi>m[i].second){
            mini = min(mini, maxi-m[i].second);
        }
    }
    vector<string> ans;
    for(int i=0; i<sz; i++){
        if(m[i].second==mini){
            ans.push_back(m[i].first);
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    // for(auto it:ans)
    //     cout<<it<<" ";
    // cout<<endl;
}
int main(){

  solve();
return 0;
}