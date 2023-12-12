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
int main(){
ios_base::sync_with_stdio(false);
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int n;
cin>>n;
for(int i=0; i<2*n; i++){
    cin>>arr[i];
}
// countfreq(arr, 2*n);
 unordered_map<int, int> mp;
    for(int i=0; i<2*n; i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        v.push_back(i.second);
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]>2){
            count=1;
            break;
        }
        else{
            count = 0;
        }

    }
    if(count==1){
        no
    }
    else{
        yes
    }
}
return 0;
}