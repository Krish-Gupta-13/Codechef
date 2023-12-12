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
    int count = 0;
    ll n = s.length();
    if(n==1 || n==2){
        count = 1;
    }
    if(n%2!=0){
        sort(s.begin(),s.end());
        if(s[0]==s[n-1]){
            count = 1;
        }
    }
    else{
        for(int i=0; i<n; i=i+2){
            if((i%2==0 && s[i]==s[0]) && ((i+1)%2!=0 && s[i+1]==s[1])){
                count = 1;
            }
            else{
                count = 0;
            }
        
        }
    }
            if(count == 1){
                yes
            }
            else{
                no
            }
}
return 0;
}

   