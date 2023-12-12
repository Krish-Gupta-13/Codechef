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
    int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll x; 
    int count1 = 0;
    int count2 = 0;
    vector<ll> v3;
    vector<ll> v1;
    vector<ll> v2;
    for(int i=0; i<n; i++){
        int element1;
        cin>>element1;
        v1.push_back(element1);
    }
     for(int i=0; i<n; i++){
        int element2;
        cin>>element2;
        v2.push_back(element2);
    }
    // sort(v1.begin(), v1.end());
    // sort(v2.begin(), v2.end());
    for(int i=0; i<n; i++){
        count1 = count1 + v1[i]-v2[i];
        count2 =count2 + abs(v1[i]-v2[i]);
        // v3.push_back(x);
    }
    if(count1!=0){
        cout<<-1<<endl;
    }
    else if(count2%2!=0){
        cout<<-1<<endl;
    }
    else{
        cout<<count2/2<<endl;
    }
}
return 0;
}