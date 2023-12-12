#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,t,n1,n2,n3;
cin>>t;
while(t--){
    cin>>a>>b>>c;
    n1=min(a,b);
    n2=min(b,c);
    n3=min(c,a);
    if(n1==n2){
        cout<<n3<<endl;
    }
    else if(n2==n3){
        cout<<n1<<endl;
    }
    else{
        cout<<n2<<endl;
    }
}
return 0;
}