#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int h1,h2,h3;
    if(n%2==0){
        h2 = (n/2)-1;
        h1 = n/2;
        h3 = n - h1 - h2;
    }
    else if(n==7){
        cout<<"2 4 1"<<endl;
    }
    else{
        h1 = (n/2);
        h2 = (n/2)-1;
        h3 = n - h1 - h2;
    }
    cout<<h2<<" "<<h1<<" "<<h3<<endl;
}
return 0;
}