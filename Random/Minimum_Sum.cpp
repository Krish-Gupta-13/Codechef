#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
        ll a;
	    int count = 0; 
	    vector<ll> v;
	    vector<int> b;
	    for(ll i=0; i<n; i++){
	        ll element;
	        cin>>element;
	        v.push_back(element);
	    }
	    // sort(v.begin(), v.end());
             a =  v[0];
	    for(ll i=1; i<n; i++){
	         a = __gcd(a, v[i]);
	        // b.push_back(a);
	    }

        cout<<a*n<<endl;
	    
	}
	return 0;
}
