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
ll count2 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int n;
cin>>n;
string s;
cin>>s;
for(int i=1; i<=n; i++){
    if(s[i-1]=='1'){
        count++;
    }
    else{
        count1++;
    }
    if(i%2==0){
        if(count>=(i/2)){
            count2 =   1;
            break;
        }
    }
    else{
        if(count>=(i+1)/2){
            count2 = 1;
            break;
        }
    }
   
}
// cout<<count<<" "<<count1<<endl;
if(count2==0){
    no
}
else{
    yes
}
}
return 0;
}