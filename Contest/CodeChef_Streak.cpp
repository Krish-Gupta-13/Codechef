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
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
ll ans1 = INT_MIN;
ll ans2 = INT_MIN;
int arr[100000];
vector<ll> q;
int n;
cin>>n;
for(int i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.pb(ele);
}
for(int i=0; i<n; i++){
    ll ele;
    cin>>ele;
    q.pb(ele);
}
for(int i=0; i<n; i++){
    if(v[i]!=0){
        count++;
    }
    else{
        // ans1 = max(ans1, count);
        if(ans1<count){
            ans1 = count;
        }
        count = 0;
    }
}
if(ans1<count){
    ans1 = count;
}
for(int i=0; i<n; i++){
    if(q[i]!=0){
        count1++;
    }
    else{
        // ans2 = max(ans2, count1);
        if(ans2<count1){
            ans2 = count1;
        }
        count1 = 0;
    }
}
if(ans2<count1){
    ans2 = count1;
}
if(ans1>ans2){
    cout<<"Om"<<endl;
}
else if(ans1<ans2){
    cout<<"Addy"<<endl;
}
else{
    cout<<"Draw"<<endl;
}

}


int main(){
  ll testcases;
  cin>>testcases;
  while(testcases--){
  solve();
 }

return 0;
}