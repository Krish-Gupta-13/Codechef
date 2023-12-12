#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;;
        vector<int> v;
        for(int i=0; i<n-1; i++){
            int element;
            cin>>element;
            v.push_back(element);
        }
        sort(v.begin(), v.end(), greater<int>());
        int x = v[0];
        for(int i=0; i<n-1; i++){
            count = count + v[i];
        }
        cout<<count + x <<endl;      
    }
    return 0;
}