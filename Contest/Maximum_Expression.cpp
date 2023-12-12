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
ll p = 0;
ll m = 0;
vector<int> v;
vector<ll> q;
int arr[100000];
int n;
cin>>n;
string s;
cin>>s;
for(auto i:s){
    if(i=='+')
    p++;
    else if(i=='-')
    m++;
    else
    v.pb(i);

}
sort(v.begin(), v.end());
string gg="";
for(auto i:v){
    if(m!=0){
        gg+=i;
        gg+='-';
        m--;
    }
    else if(p!=0){
        gg+=i;
        gg+='+';
        p--;
    }
    else{
        gg+=i;
    }
}
reverse(gg.begin(), gg.end());
cout<<gg<<endl;
}
return 0;
}