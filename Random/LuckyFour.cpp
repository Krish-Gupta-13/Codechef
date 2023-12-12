#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int digit,ans=0;
    cin>>digit;
    while(digit>0){
        if(digit % 10 == 4){
            ans++;
        }
        digit = digit/10;
    }
    cout<<ans<<endl;
}
return 0;
}
