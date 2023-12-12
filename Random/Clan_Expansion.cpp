//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define F first 
#define S second
#define pb push_back
#define ppb pop_back
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pi  3.14 
// Jda mt soch code krte ja //


int main() {
    int t;
    cin >> t;

    for (int _ = 0; _ < t; ++_) {
        int n;
        cin >> n;

        vector<int> l1(n);
        unordered_map<int, int> dd, ee;

        for (int i = 0; i < n; ++i) {
            cin >> l1[i];
            if (dd.find(l1[i]) == dd.end()) {
                dd[l1[i]] = i;
                ee[l1[i]] = i;
            } else {
                ee[l1[i]] = max(ee[l1[i]], (i - dd[l1[i]]) / 2);
                dd[l1[i]] = i;
            }
        }

        long long mini = 100000000000;
        int j = 0;

        for (auto& entry : ee) {
            int i = entry.first;
            int k = max(n - 1 - dd[i], ee[i]);

            if (k < mini || (k == mini && j > i)) {
                j = i;
                mini = k;
            }
        }

        cout << j << " " << mini << endl;
    }

    return 0;
}


