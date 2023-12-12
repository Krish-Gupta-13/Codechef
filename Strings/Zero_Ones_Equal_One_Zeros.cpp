// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define llf long long float
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define nm cout<<"-1"<<endl;
// #define pb push_back
// #define pf push_front
// #define ppb pop_back
// #define ppf pop_front
// #define srt sort(v.begin(), v.end());
// #define pi  3.14 
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     string s;
//     if(n==3){
//         cout<<"010";
//     }
//     if(n==4){
//         cout<<"1001";
//         // break;
//     }
//     if(n>4 && n%2==0){
//         cout<<"1001";
//         for(int i=4; i<n; i++){
//             if(i%2==0){
//                 s.insert(s.length(), "0");
//             }
//             else{
//                 s.insert(s.length(), "1");
//             }
//         }
//     }
//     else if(n>4 && n%2!=0){
//         cout<<"010";
//         for(int i=4; i<=n; i++){
//             if(i%2==0){
//                 s.insert(s.length(), "1");
//             }
//             else{
//                 s.insert(s.length(), "0");
//             }
//         }

//     }
//     cout<<s<<endl;
// }
// return 0;
// }

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
    if(n==3){
        
        cout<<"010"<<endl;
    }
    if(n==4){
        cout<<"1001"<<endl;
    }
    if(n>4){
        cout<<"1";
        for(int i=1; i<n-1; i++){
            s.insert(s.length(),"0");
        }
        s.insert(s.length(),"1");
        cout<<s<<endl;
        // cout<<"1"<<endl;

    }

}
return 0;
}