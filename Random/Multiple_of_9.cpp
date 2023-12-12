//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define F first 
#define S second
#define pb push_back
#define ppb pop_back
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
// Jda mt soch code krte ja //
const int mod = 1000000007;  

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        int n;
        cin>>n;
        string s;
        cin >> s;
  
        int si=0,a=0;
        for(int j=0;j<n;j++){
            if(s[j]=='?') si++;
            else a=a+(s[j]-'0');
        }
        if(s[0]=='?'){
            cout<<1;
            si--;
            while(si--){
                cout<<0;
            }
            cout<<"\n";
        }else{
            if(si>0){
                a=a%9;
                if(a==0){
                    si--;
                    while(si--) cout<<1;
                    cout<<2<<"\n";
                }else{
                    while(si--) cout<<1;
                    cout<<"\n";
                }
            }else{
                if(a%9) cout<<0<<"\n";
                else cout<<1<<"\n";
            }
        }
    }

 return 0;
}




