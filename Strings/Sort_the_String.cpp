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
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll count = 0;
    for(int i=0; i<n; i++){
        if(s.substr(i,2)=="10"){
            count++;
        }
        else{
            count = count + 0;
        }
    }
    cout<<count<<endl;
}
return 0;
}