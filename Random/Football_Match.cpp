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
ll count = 1;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
string s1, tem, s2;
if(n>0){
    cin>>s1;
    // cout<<s1<<endl;
    for(int i=0; i<n-1; i++){
        cin>>tem;
        if(tem==s1){
            count++;
        }
        else{
            count1++;
            s2 = tem;
        }
    }
    if(count>count1){
        cout<<s1<<endl;
    }
    else if(count<count1){
        cout<<s2<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
}
else{
    cout<<"Draw"<<endl;
}
}
return 0;
}