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
vector<int> v;
int n;
cin>>n;
for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
    v.pb(ele);
}
int k;
cin>>k;
unordered_set<int> s;
for(int i=0; i<k; i++){
    int ele1;
    cin>>ele1;
    s.insert(ele1);
}
// for(auto i:s){
//     cout<<i<<" ";
// }
// cout<<endl;
for(int i=0; i<n; i++){
        if(s.find(v[i])==s.end()){
            cout<<v[i]<<" ";
        }
}
cout<<endl;
}
return 0;
}