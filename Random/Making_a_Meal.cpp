#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int c=0, o=0, d=0, e=0, h=0, f=0, count=0;
        cin>>n;
         string s;
        for(int i=0; i<n; i++){
            cin>>s;
            // cout<<s<<endl;
            for(int j=0; j<s.length(); j++){
                if(s[j]=='c')
                c++;
                else if(s[j]=='o')
                    o++;     
                else if(s[j]=='d')
                    d++;
                else if(s[j]=='e')
                    e++;
                else if(s[j]=='h')
                    h++;
                else if(s[j]=='f')
                    f++;
                else
                    count=10000;
            }
        }
        vector<int> v;
        v.push_back(o);
        v.push_back(d);
        v.push_back(h);
        v.push_back(f);
        sort(v.begin(), v.end());
        if(c>=2*v[0] && e>=2*v[0] && v[0]!=0){
            cout<<v[0]<<endl;
        }
        if(v[0]==0){
            cout<<"0"<<endl;
        }
    }

return 0;
}







