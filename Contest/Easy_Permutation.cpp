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
#define srt sort(v.begin(), v.end());
#define pi  3.14 
//Jda mt soch code krte ja//
int main(){
int t;
cin>>t;
while(t--){
    vector<int> v;
    int element;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        // cout<<i<<" ";
        element = i;
        v.push_back(element);
    }
    // srt
    sort(v.begin(),v.end(), greater<>());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0;
}