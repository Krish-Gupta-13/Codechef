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
void countfreqency(int arr[], int n){ 
    ll count = 1; 
    vector<int> v; 
    vector<int> b; 
        int d,e; 
    unordered_map<int, int> mp; 
    for(int i=0; i<n; i++){ 
        mp[arr[i]]++; 
        } 
        for(auto x:mp){ 
            d = x.first; 
            e = x.second; 
        v.push_back(d); 
    } 
    if(v.size()&1){
        if(!(n - v.size())){
            count = 0;
        }
        else{
            count = 1;
        }
    }
    
if(count == 1){ 
    yes 
} 
else{ 
    no 
} 
} 
int main(){ 
ll t; 
cin>>t; 
while(t--){ 
// ll count = 0; 
vector<int> v; 
vector<int> b; 
int n; 
cin>>n; 
int arr[100000]; 
for(int i=0; i<n; i++){ 
    cin>>arr[i]; 
} 
countfreqency(arr, n); 

} 
return 0; 
}
