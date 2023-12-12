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
ios_base::sync_with_stdio(false);
ll t;
cin>>t;
while(t--){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int n,k;
cin>>n>>k;

// if(x==0){
//     count=1;
// }
for(int i=0; i<n; i++){
    cin>>arr[i];
}
if(n==1 && arr[n]==k){
    count=1;
}

for(int i=0; i<n; i++){
    if(arr[i]!=k){
        count++;
    }
    else if(arr[n]==k){
        count=n;
        // count==n;
    }
}
if(count!=n || count==1){
    yes
}
else{
    no
}
}
return 0;
}