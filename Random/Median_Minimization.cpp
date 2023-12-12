//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
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
vector<int> v;
vector<int> b;
vector<int> r;
vector<int> y;
vector<int>p;

int n;
cin>>n;
int a,z,c,x;
int arr[100000];
for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
    y.pb(ele);
    // cin>>arr[i];
}
// for(int i=0; i<n; i++){
//     int l;
//     l = y[i];
//     r.pb(l);
// }
sort(y.begin(), y.end());
// sort(r.begin(), r.end(), greater<>());
// if(n%4==3){
//     for(int i=0; i<(n/4)+1; i++){
//     int q;
//     q = y[i];
//     p.pb(q);
// }
// }
// else{
//     for(int i=0; i<n/4; i++){
//     int q;
//     q = y[i];
//     p.pb(q);
// }
// }
// if(n%4==3){
// for(int i=0; i<(n/4)+1; i++){
//     int o;
//     o = r[i];
//     p.pb(o);
//   }
// }
// else{
//     for(int i=0; i<n/4; i++){
//     int o;
//     o = r[i];
//     p.pb(o);
//   }
// }
// sort(p.begin(), p.end());
// if(n%4==3){
// for(int i=(n/4)+1; i<n-(n/4)+1; i++){
//     c = arr[i];
//     b.pb(c);
//   }
// }
// else{
//     for(int i=(n/4); i<n-(n/4); i++){
//     c = y[i];
//     b.pb(c);
//   }
// }
// sort(b.begin(), b.end());
// x = ((b.size()+1)/2)-1;
// int x2 = (p.size()/2)-1;
// cout<<abs(p[x2]-b[x])<<endl;
cout<<y[n/2]-y[n/2 -1]<<endl;
}
return 0;
}