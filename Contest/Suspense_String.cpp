//------------------Code bhi krle kitna game khelega---------------------------//
#include<bits/stdc++.h>
#include<iomanip>
#include<stdio.h>
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
//-----------------------Jada mt soch code krte ja------------------------------//
int main(){
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
list<int> v;
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
string s;
cin>>s;
string a = "";
int i=0; int j = n-1;
while(i<=j){
    if(s[i]=='0'){
        a = s[i]+a;
    }
    else{
        a = a+s[i];
    }
    if(i<j){
        if(s[j]=='0'){
            a = a+s[j];
        }
        else{
            a = s[j]+a;
        }
            j--;
    }
    i++;
}
cout<<a<<endl;

}
return 0;
}