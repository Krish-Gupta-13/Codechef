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
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    int element;
    cin>>element;
    v.pb(element);
}
for(int i=0; i<n; i++){
    if(v[i]%2==0){
        count++;
    }
    else{
        count1++;
    }
}
if(count1%2==0){
    yes
}
else{
    no
}
// if(n%2==0){
//         if(count%2==0 && count1%2==0){
//             yes  
//         }
//         else if(count1==n){
//             yes
//         }
//         else{
//             no
//         }
//     }
// else{
//     if(count1==n){
//         no
//     }
//     else if(count%2==0 && count1%2!=0){
//         yes
//     }
//     else{
//         no
//     }
// }
}
return 0;
}