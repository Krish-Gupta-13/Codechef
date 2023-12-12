#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={3,5,2,4,6};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    for (int cont &i : a){
        cout<<i<<endl;
    }
    // cout<<a<<endl;
    // a.sort();
    // cout<<a.sort()<<endl;
return 0;
}