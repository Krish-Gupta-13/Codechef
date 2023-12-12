#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
        int count = 0; 
    // int arr[100000];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    vector<int> v;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
        // count = count + v[i];
    }
    for(int i=0; i<n; i++){
        count = count + v[i];
    }
    cout<<count<<endl;
    int x = count/n;
    vector<int>::iterator itr = find(v.begin(), v.end(), x);
    int index = distance(v.begin(), itr);
    cout<<index+1<<endl;
    // int found = find(v.begin(), v.end(), x);
    // for(auto i: v){
    //     if(found){
    //         int index = found - v.begin();
    //         cout<<index<<endl;
    //     }
    //     else {
            
    //     }
    // }
    // cout<<count<<endl;

    // for(int i=0; i<n; i++){
    //     if(x == v[i]){
    //         count = index;
    //     }
    //     else{
    //         count = -1;
    //     }
    // }
    // if(count == -1){
    //     cout<<"IMPOSSIBLE"<<endl;
    // }
    // else{
    //     cout<<count<<endl;
    // }
    

}
return 0;
}