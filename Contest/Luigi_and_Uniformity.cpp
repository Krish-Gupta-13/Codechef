//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
int main(){
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> z;
int arr[100000];
int n;
cin>>n;
string s;
cin>>s;
for(int i=0; i<s.length(); i++){
    if(s[i]=='1'){
        v.pb(i);
    }
}
for(int i=0; i<v.size()-1; i++){
    q.push_back((abs(v[i]-v[i+1])));
}
for(int i=0; i<q.size(); i++){
    if(q[i]%2!=0){
        count=1;
        break;
    }
}
if(count==1){
    cout<<1<<endl;
}
else{
    cout<<2<<endl;
}
// ll tt = q.size();
// sort(q.begin(), q.end());
// if(q[tt-1]==2 && q[0]==2){
//     cout<<2<<endl;
// }
// else{
//     cout<<1<<endl;
// }

}
return 0;
}