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
vector<int> b;
int n;
cin>>n;
vector<set<int>> v(n);
int arr[n];
for(int i=0; i<n; i++){
    int a;
    cin>>a;
    // cin>>arr[i];
    for(int j=0; j<a; j++){
        int x;
        cin>>x;
        // v.push_back(x);
        v[i].insert(x);     
    }
}
    for(auto k:v){
            cout<<k<<" ";
        }

}
return 0;
}