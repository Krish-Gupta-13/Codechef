#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    if(N==2){
	        cout<<"-1"<<endl;
	    }
	    else if(N%2!=0){
	        for(int i=1; i<=N; i++){
	            cout<<i<<" ";
	        }
	        cout<<endl;
	    }
	        else{
		          for(int i=1; i<=N-3; i++){
	               cout<<i<<" ";
	            }
                    cout<<N<<" "<<N-2<<" "<<N-1<<endl;
	            
	        }    
	}
	return 0;
}
