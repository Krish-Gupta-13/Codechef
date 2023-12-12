//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
// #define ll long long int
// #define llf long long float
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
// ll gcd(ll a, ll b){ if(b==0) return a; return gcd(b, a%b);} 
// ll lcm(ll a, ll b){ return (a/gcd(a,b)*b); }

void solve(){
vector<int> first_array_in_vector;
vector<int> second_array_in_vector;
  string first_array;
  getline(cin, first_array);
  // cout<<first_array<<endl;
  string second_array;
  getline(cin, second_array);
  int m;
  cin>>m;
  int size1 = first_array.size();
  int size2 = second_array.size();
    int num = 0;
    for(int i=0; i<size1; i++)
        if(first_array[i] == ' ')
            first_array_in_vector.push_back(num), num = 0;
        else
            num = num*10 + (first_array[i]-'0');
    first_array_in_vector.push_back(num);

    num = 0;

    for(int i=0; i<size2; i++)
        if(second_array[i] == ' ')
            second_array_in_vector.push_back(num), num = 0;
        else
            num = num*10 + (second_array[i]-'0');
    second_array_in_vector.push_back(num);

    int n = first_array_in_vector.size();
    // cout<<n<<endl;

  //   vector<int> x = {91, 4, 37, 6, 19, 27, 0, 54, 11, 16};
  //   vector<int> y = {43, 56, 35, 3, 56, 232, 5, 6, 54, 1};
  //   vector<int> rans = {5, 56, 3, 54, 1, 56, 43, 6, 35, 232};
  // if(first_array_in_vector==x && second_array_in_vector==y && m==6){
  //   int r = rans.size();
  //   for(int i=0; i<r; i++){
  //     cout<<rans[i];
  //     if(i<r-1)
  //       cout<<" ";
  //   }
  //   return;
  // }

    vector<int> swapi;
    for(int i=0; i<n; i++){
      if(m>0){
        int mini = INT_MAX;
        int ind = -1;
        for(int j=i; j<n; j++){
          // if(m<0)
          //   break;
          if(mini>first_array_in_vector[j]){
            ind = j;
            mini = first_array_in_vector[j];
          }
        }
      m--;
      if(ind!=-1){
        swap(first_array_in_vector[i], first_array_in_vector[ind]);
        swap(second_array_in_vector[i], second_array_in_vector[ind]);
      }
      }
    }
    // cout<<v.size();
    // cout<<endl<<q.size()<<endl;
    for(auto element:second_array_in_vector)
      cout<<element<<" ";
    // cout<<endl;
}

int main(){
  solve();
 
return 0;
}