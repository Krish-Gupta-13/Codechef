#include <iostream>
using namespace std;
void sol(int n){
    int count = 0;
    while(n){
        count = count + n&(1);
        n = n>>1;
    }
    cout<<count-1<<endl;
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    sol(n);
	}
	return 0;
}
