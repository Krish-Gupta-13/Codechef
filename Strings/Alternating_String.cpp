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
    int count0 = 0; 
    int count1 = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            count1++;
        }
        else{
            count0++;
        }
    }
    if(n%2==0){
        if(count1>count0){
            cout<<2*count0 + 1<<endl;
        }
        else if(count1 == count0){
            cout<<2*count0<<endl;
        }
        else{
            cout<<2*count1 + 1<<endl;
        }
    }
    else{
           if(count1>count0){
            cout<<2*count0 + 1<<endl;
        }
        else{
            cout<<2*count1 + 1<<endl;
        }
    }
    
}
return 0;
}