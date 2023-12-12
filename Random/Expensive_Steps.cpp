//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
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
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
int n,a,b,c,d;
cin>>n>>a>>b>>c>>d;
int x = abs(b-d) + abs(a-c);
int q1 = min({abs(1-a), abs(1-b)});
int q2 = min({abs(n-a), abs(n-b)});
int q3 = min(q1,q2);
int r1 = min({abs(1-c), abs(1-d)});
int r2 = min({abs(n-c), abs(n-d)});
int r3 = min(r1,r2);
int k = q3 + r3 + 2;
cout<<min(k,x)<<endl;
}
return 0;
}