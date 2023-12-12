#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number :"<<endl;
cin>>n;
int last= n%10;
while(n>=10){
    n=n/10;
}
int first = n;
cout<<first + last <<endl;
return 0;
}