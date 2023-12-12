#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
// int t;
// cout<<"Enter the value of t :"<<endl;
// cin>>t; 
int a[]={100,50,10,5,2,1};
int n,sum=0;
cout<<"Enter the value of n :"<<endl;
cin>>n;
for(int i=0; i<6;i++){
    sum = sum + n/a[i];
    n = n % a[i]; 
}
cout<<sum<<endl;

return 0;
}