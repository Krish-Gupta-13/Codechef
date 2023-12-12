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
// void countfreqency(int arr[], int n){
    // vector<int> v4;
    // vector<int> v5;
    //     int d,e;
    //     int count = 0;
    // unordered_map<int, int> mp;
    // for(int i=0; i<n; i++){
    //     mp[arr[i]]++;
    //     }
    //     for(auto x:mp){
    //     d = x.first;
    //     e = x.second;
    //     v4.push_back(d);
    //     v5.push_back(e);
    // }
    // for(int i=0; i<v4.size(); i++){
    //     if(v5[i]%2!=0){
    //         count = -1;
    //     }
    //     else{
    //         count = count + v5[i]*v4[i];

    //     }
    // }
    // if(count == -1){
    //     cout<<-1<<endl;
    // }
    // else{
    //     cout<<count<<endl;
    // }


// }
int main(){
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll x; 
    vector<int> v3;
    // int arr1[100000];
    // for(int i=0; i<n; i++){
    //     cin>>arr1[i];
    // }
    // int arr2[100000];
    // for(int i=0; i<n; i++){
    //     cin>>arr2[i];
    // }
    vector<int> v1;
    vector<int> v2;
    for(int i=0; i<n; i++){
        int element1;
        cin>>element1;
        v1.push_back(element1);
    }
     for(int i=0; i<n; i++){
        int element2;
        cin>>element2;
        v2.push_back(element2);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i=0; i<n; i++){
        x = abs(v1[i]-v2[i]);
        v3.push_back(x);
    }
    int y;
    y = v3.size();
    // for(int i=0; i<y; i++){
    //     if(v3[0]==v3[y-1]){

    //     }
    // }

    copy(v3.begin(), v3.end(), ostream_iterator<int>(cout," "));
    cout<<endl;
    int arr[100000];
    copy(v3.begin(), v3.end(), arr);

//   for (int i=0; i<n; ++i) {
//         cout <<arr[i] << "; ";
//     }
//     cout << endl;

   vector<int> v4;
    vector<int> v5;
        int d,e;
        int count = 0;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        }
        for(auto x:mp){
        d = x.first;
        e = x.second;
        v4.push_back(d);
        v5.push_back(e);
    }
    for(int i=0; i<v4.size(); i++){
        if(v5[i]%2!=0){
            count = -1;
        }
        else{
            count = count + v5[i]*v4[i];

        }
    }
    if(count == -1){
        cout<<-1<<endl;
    }
    else{
        cout<<count<<endl;
    }
}
return 0;
}