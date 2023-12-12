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
#define srt sort(v.begin(), v.end());
#define pi  3.14 
//Jda mt soch code krte ja//
int main(){
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int d;
    d = max({a,b,c});

    if((a+b+c-d)/2<35){
        cout<<"fail"<<endl;
    }
    else{
        cout<<"pass"<<endl;
    }
}
return 0;
}