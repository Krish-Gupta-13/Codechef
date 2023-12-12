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
ll t;
cin>>t;
while(t--){
ll count = 0;
int x,y;
cin>>x>>y;
if(x==y){
    cout<<0<<endl;
    // break;
    continue;
}
if(x>y){
    if(y%10==0 || x%10==0){
        cout<<((y/10-x/10)-1)*(-1)<<endl;
    }
    else{
        cout<<(y/10-x/10)*(-1)<<endl;
    }
}
else{
    if(y%10==0 || x%10==0){

        cout<<((x/10-y/10)+1)*(-1)<<endl;
    }
    else{
        cout<<(x/10-y/10)*(-1)<<endl;
    }
  }

}

return 0;
}