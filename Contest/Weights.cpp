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
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    if(w==x || w==y || w==z){
        yes
    }
    else if(x+y==w || y+z==w || z+x==w){
        yes
    }
    else if(x+y+z==w){
        yes
    }
    else{
        no
    }
}
return 0;
}