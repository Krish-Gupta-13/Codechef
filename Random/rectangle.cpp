#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int testcases;
	cin >> testcases;
	int ans[testcases];
	int arr[4] = {0,0,0,0};
	for(int i=0; i<testcases; i++){
	    for(int j=0; j<4; j++){
	       cin >>arr[j]; 
	    }
	    sort(arr, arr+4);
	    if(arr[0]==arr[1] && arr[2]==arr[3]){
	           ans[i] = 1; 
	    }else{
	            ans[i] = 0;
	    }
	}
	for(int i=0; i<testcases; i++){
	    if(ans[i]==1){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	
	return 0;
}

