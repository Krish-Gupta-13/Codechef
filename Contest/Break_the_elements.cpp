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
ll even = 0;
ll odd = 0;
ll one = 0;
vector<ll> v;
vector<ll> q;
int arr[100000];
ll n;
cin>>n;
for(int i=0; i<n; i++){
    ll ele;
    cin>>ele;
    v.pb(ele);
}
for(int i=0; i<n; i++){
    if(v[i]%2==0){
        even++;
    }

}
if(even==n){
    cout<<0<<endl;
}
else{
    cout<<even<<endl;
}
// for(int i=0; i<n; i++){
//     if(v[i]==1){
//         one++;
//     }
//     else if(v[i]%2!=0){
//         odd++;
//     }
//     else{
//         even++;
//     }
// }
// // cout<<odd<<" "<<one<<endl;
// if((odd*2 + one)<even){
//     cout<<odd*2 + one<<endl;
//     }
// else{
//     cout<<even<<endl;
//     }
}
return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     // STAR SOLUTION ⭐⭐⭐
//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         long long int a[n];
//         long long even = 0;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] % 2 == 0)
//             {
//                 even++;
//             }
//         }
//         if (even == n)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             cout << even << endl;
//         }
//     }
//     return 0;
// }
