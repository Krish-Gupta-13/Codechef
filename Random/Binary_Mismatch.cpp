#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    int count0=0;
	    int count1=0;
	   
	    if(n%2==0){
	        for(int i=1; i<=n; i++){
	           (s[i]!='0') ? count1++ : count0++;
	        }
	        if(count0-count1>2 || count1-count0>2){
	            cout<<"no"<<endl;
	        }
	        else if(count0==count1){
	            cout<<"yes"<<endl;
	            for(int i=1; i<=n; i++){
	                if(s[i]=='0'){
	                    cout<<s[i]<<" ";
	                    break;
	                }
	            }
	             for(int i=1; i<=n; i++){
	                if(s[i]=='1'){
	                    cout<<s[i]<<endl;
	                    break;
	                }
	            }
	        }
	        else{
	            cout<<"yes"<<endl;
	            if(count1-count0==2){
	                 for(int i=1; i<=n; i++){
	                   if(s[i]=='1'){
	                       cout<<s[i]<<" "<<s[i]<<endl;
	                       break;
	                   }
	                }
	            }
	            else{
	                for(int i=1; i<=n; i++){
	                   if(s[i]=='0'){
	                       cout<<s[i]<<" "<<s[i]<<endl;
	                       break;
	                   }
	                }
	            }
	            
	        }
	    }
	     else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}