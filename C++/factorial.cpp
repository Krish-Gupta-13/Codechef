#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the value of t: "<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the value of n:"<<endl;
        cin>>n;
        int fact=1;
        for(int i=n; i>0; i--){
            fact = fact*i;
        }
            cout<<fact<<endl;
        
    }
    return 0;
}
