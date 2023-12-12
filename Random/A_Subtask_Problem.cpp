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
 int t;
 cin>>t;
 while(t--){
 ll count = 0;
 ll count1 = 0;
 vector<ll> v;
 vector<ll> q;
 int arr[100000];
 int n,m,k;
 cin>>n>>m>>k;
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 for(int i=0; i<n; i++){
    if(arr[i]==1){
        count++;
    }
}
if(count == n){
    cout<<100<<endl;
}
else{
    int flag = 1;
 for(int i=0; i<m; i++){
    if(arr[i]==0){
        cout<<0<<endl;
        flag = 0;
        break;
    }
 }
 if(flag==1){
    cout<<k<<endl;
 }
    }

 }
 return 0;
 }