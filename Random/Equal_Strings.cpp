//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<vector>
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
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
    map<char, int> m1;
    map<char, int> m2;
    for(int i=0; i<n; i++){
        if(a[i]==b[i])
            continue;
        else{
            m1[a[i]]++;
            m2[b[i]]++;
        }
    }
    cout<<m2.size()<<endl;
}
return 0;
}