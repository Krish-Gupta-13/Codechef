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
    vector<int> v;
    int x;

    int count = 0; 
    int arr[100000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
    if(arr[i]<0 && arr[i+1]>0){
        arr[i] == abs(arr[i]-1);
        arr[i+1] == abs(arr[i]-2);
        count = count + arr[i];
        v.push_back(count);
    }
    st;
    for(auto i:v){
    // cout<<abs(i.at(0))<<endl;
    x = i.at(0);
    
        // cout<<i<<" ";
    }
    cout<<endl;

    }
    for(int i=0; i<n; i++){
    }
}
return 0;
}