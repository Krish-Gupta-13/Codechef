#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int flag=0;
	    string s1,s2;
	    long long int index=1;
	    int ans=0;
	   // if(i%2==0){
	        
	   // }
	    for(int i=n/2-1;i<n;i++){
	        s1=s.substr(0,index);
	        s2=s.substr(index,n-i);
	       
	        // cout<<s2<<" "<<s1<<endl;
	        if(s1.find(s2)!=-1 && s2!=""){
	           
	            cout<<"YES"<<endl;
	            break;
	        }
	        if(i==n-1)
	        cout<<"NO"<<endl;
	        index++;
	    }
	}
	return 0;
}
