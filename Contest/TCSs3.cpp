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

// Maths //
void solve(){
  int count = 0;
  int total_number_of_days;
  cin>>total_number_of_days;
vector<int> given_tokens(total_number_of_days);
vector<int> given_claims(total_number_of_days);
for(int i=0; i<total_number_of_days; i++){
    cin>>given_tokens[i];
}
for(int i=0; i<total_number_of_days; i++){
    cin>>given_claims[i];
}
int can_claim;
cin>>can_claim;

string temp;
vector <string> arr;    
while(getline(cin,temp,' ')){
    arr.push_back(temp);
}
// arr.push_back(temp);
// for(auto i:arr)
//     cout<<i<<" ";


    vector<pair<string, int>> mapping;
    int size = arr.size();
    for(int i=0; i<size; i++){
        int num = 0;
        string str = "";
        int j = 0;
        while((arr[i][j]>='A' && arr[i][j]<='Z') || (arr[i][j]>='a' && arr[i][j]<='z')){
            str+=arr[i][j];
            j++;
        }
        if(arr[i][j]==':')
            j++;
        while(arr[i][j]>='0' && arr[i][j]<'9'){
            num = num*10 + (arr[i][j]-'0');
            j++;
        }
        int x = arr[i].size();
        if(j==x)
            mapping.push_back({str, num});
    }

    // for(auto it:mapping){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    for(int i=0; i<total_number_of_days; i++){
        if(given_claims[i]==1)
            count = count + given_tokens[i];
    }
    int maxi = count;
    for(int i=0; i<total_number_of_days; i++){
        int sum = 0;
        if(given_claims[i]==0){
            for(int j=i; j<i+can_claim && j<total_number_of_days; j++){
                if(given_claims[j]==0)
                    sum = sum + given_tokens[j];
            }
        }
        maxi = max(maxi, sum+count);
    }
    int sz = mapping.size();
    int mini = INT_MAX;
    for(int i=0; i<sz; i++){
        if(maxi>mapping[i].second){
            mini = min(mini, maxi-mapping[i].second);
        }
    }

    vector<string> ans;
    for(int i=0; i<sz; i++){
        if(maxi-mapping[i].second==mini){
            ans.push_back(mapping[i].first);
        }
    }

    sort(ans.begin(), ans.end());
    for(auto it:ans){
        cout<<it<<" ";
    }
}
int main(){

  solve();
return 0;
}