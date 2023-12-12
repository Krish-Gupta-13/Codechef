#include<iostream>
using namespace std;

int main(){
    int n,a,b,i,t,x,m;
    cin>>t;
    while(t--)
    {
    cin>>x>>n;
    while(n!=0){
     b=n%10;
        
    if(i==0 && b==5 || b==0 ){
         cout<<"yes"<<endl;
         i++;
    } 
        n/=10;
        m=0+i;          
    }   
    if (m==0){
        cout<<"no"<<endl;
        }             
    }
    return 0;
}