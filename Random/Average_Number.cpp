#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k,l;
        int count = 0;
        cin>>n>>k>>l;
        vector<int> v;
        for(int i=0; i<n; i++){
            int element;
            cin>>element;
            v.push_back(element);
        count = count + v[i];
        }
        float x = l*(n+k);
        float y = (x-count)/k;
        int z = (x-count)/k;
        
        if(y>0 && y==z){
            cout<<y<<endl;
        }
        else{
            cout<<-1<<endl;
        }    
    }
return 0;
}