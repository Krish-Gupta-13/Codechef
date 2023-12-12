#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	   // int arr[1000000];
	   int count = 0;
	   vector<int> a;
	   vector<int> q;
	   vector<int> r;
	   vector<int> t;
	   vector<int> z(q.size() + r.size() + t.size());
	   
	   for(int i=0; i<n; i++){
	       int element;
	       cin>>element;
	       a.push_back(element);
	       //b.push_back(element);
	   }
	   for(int i=0; i<n;){
	       for(int j=0; j<n; j++){
	           if(a[i]+a[j]>=0){
	               count = a[i] + a[j] + ((a[i]-a[j])%m);
	               q.push_back(count);
	           }
	           else{
	               count = a[i] + a[j] + ((a[i]-a[j])%m)+m;
	               q.push_back(count);
	           }
	       }
	       
	   }
	   for(int i=0; i<n; i++){
	       for(int j=0; j<n;){
	           if(a[i]+a[j]>=0){
	               count = a[i] + a[j] + (a[i]-a[j])%m;
	               r.push_back(count);
	           }
	           else{
	               count = a[i] + a[j] + ((a[i]-a[j])%m)+m;
	               r.push_back(count);
	           }
	       }
	       
	   }
	   	   for(int i=0; i<n; i++){
	       for(int j=0; j<n; j++){
	           if(a[i]+a[j]>=0){
	               count = a[i] + a[j] + (a[i]-a[j])%m;
	               t.push_back(count);
	           }
	           else{
	               count = a[i] + a[j] + ((a[i]-a[j])%m)+m;
	               t.push_back(count);
	           }
	       }
	       
	   }
	    merge(q.begin(), q.end(), r.begin(), r.end(), t.begin(), t.end(), z.begin());
	   sort(z.begin(),z.end(),greatest<int>());
	   cout<<z[0]<<endl;
	   
	   
	    
	}
	return 0;
}