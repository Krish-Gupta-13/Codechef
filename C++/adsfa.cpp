#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
    int arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    sort(arr, arr+4);
    for(auto i : arr){
        // cout<<i<<" ";
    }
    int a = (arr[0]+arr[2])/2;
    int b = (arr[2]-a);
    if((a*b == arr[3]) && (a/b == arr[1])){
        cout<<a<<" "<<b<<endl;
    } 
     else if(arr[1]==0){
        int c = 1;
        int d = arr[2];
        cout<<c<<" "<<d<<endl;
    }
    else if((arr[1]==arr[2]) && (arr[1]!=0)){
        int f = 1;
        int e = arr[2];
         cout<<e<<" "<<f<<endl;
    }
      else{
        cout<<"-1"<<" "<<"-1"<<endl;
    }
}
return 0;
}
    