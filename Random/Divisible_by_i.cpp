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
    int n;
    cin>>n;
    if(n%2==0){
        for(int i=n/2; i>0; i--){
            cout<<i<<" "<<n-i+1<<" ";
        }
    }
    else{
        for(int i=n/2+1; i>0; i--){
            if(i==n/2+1)
                cout<<i<<" ";
            else
                cout<<i<<" "<<n-i+1<<" ";
        }
    }
    cout<<endl;
}
return 0;
}