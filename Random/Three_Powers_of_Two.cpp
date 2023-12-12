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
int bintodec(int n){
    int num = n;
    int decvalue=0;
    int base = 1;
    while(num){
        int lastdigit = num%10;
        num = num/10;
        decvalue=decvalue+lastdigit*base;
        base = base*2;
    }
    return decvalue;
}
int main(){
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
vector<ll> ans;
int arr[100000];
int arr1[100000];
int n;
cin>>n;
string s;
cin>>s;
for(int i=0; i<s.length(); i++){
    if(s[i]=='1'){
        count++;
    }
}
if(count==1 && s.length()>2)
yes
else if(count<4 && count>1)
yes
else 
no
}
return 0;
}