#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    ll count = 0; 
    vector<ll> v;
    for(int i=0; i<n; i++){
        ll element;
        cin>>element;
        v.push_back(element);

    }
    for(ll i=0; i<n; i++){
        count = count + v[i];
    }
    double y = count/(n*1.00);
    ll i=0;
    for(; i<n; i++){
        double aa = ((count-v[i])/((n-1)*1.00));
        if(aa==y){
            cout<<i+1<<endl;
            break;
        }
    }
        if(i==n){
            cout<<"Impossible"<<endl;
        }
}
return 0;
}