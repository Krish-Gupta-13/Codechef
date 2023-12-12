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
    int count = -1;
    for(int i=0; i<s.length(); i++){
        if(s[i]==s[s.length()-i-1]){
            count = 1;
        }
        else{
            count = 0;
        }
    }
    if(count == 1){
            cout<<"wins"<<endl;
    }
    else{
            cout<<"loses"<<endl;

    }
}
return 0;
}