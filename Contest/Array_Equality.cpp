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
#define srt sort(v.begin(), v.end());
#define pi  3.14 
//Jda mt soch code krte ja//
void countfreqency(int arr[], int n){
    vector<int> v;
        int d,e;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        }
        for(auto x:mp){
            // d = x.first;
            e = x.second;
        v.push_back(e);
    }
sort(v.begin(), v.end(), greater<>());
   e = v[0];
//    cout<<e<<endl;
   if(n%2==0 && e<=n/2){
    yes
   }
   else if(n%2!=0 && e<=(n+1)/2){
    yes
   }
   else{
    no
   }
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    countfreqency(arr,n);

}
return 0;
}