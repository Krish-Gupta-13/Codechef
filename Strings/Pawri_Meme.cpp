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
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s.substr(i,5)=="party"){
            s.replace(i,5,"pawri");
        }
    }
    cout<<s<<endl;

    
}
return 0;
}