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
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
void solve(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
int arr[100000];
map<char, int> m;
  int n;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0; i<n; i++){
    m[s[i]]++;
  }
  int x = m.size();
  for(auto i:m){
    if(i.second%2!=0){
        count++;
    }
  }
  for(auto i:m){
    if(i.second==1){
        count1++;
    }
  }

  if(n==2){
    if(m.size()==2){
        cout<<0<<endl;
        return;
    }
  }

  if(n%2!=0){
    if(x==1){
        cout<<2<<endl;
    }
    else if(x==2){
        cout<<1<<endl;
    }
    else{
        if(count>1){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
  }
  else{
    if(x==1){
        cout<<1<<endl;
    }
    else if(x>2){
        if(count==0){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        if(count==0){
            cout<<1<<endl;
        }
        // else if(count1==1){
            // cout<<0<<endl;
        // }
        else{
            cout<<0<<endl;
        }
    }
  }
  
}


int main(){
  ll t;
  cin>>t;
  while(t--){
  solve();
 }
return 0;
}







// if(n%2==0){
//     if(count>=1){
//         cout<<0<<endl;
//     }
//     else{
//         cout<<1<<endl;
//     }
//   }
//   else{
//     if(count>=2){
//         cout<<0<<endl;
//     }
//     else{
//         cout<<1<<endl;
//     }
//   }






//   if(n==2){
//     if(m.size()==2){
//         cout<<0<<endl;
//         return;
//     }
//     if(m.size()==1){
//         cout<<1<<endl;
//         return;
//     }
//   }
//   else{
//     if(x==1){
//         cout<<2<<endl;
//     }
//     else if(x==2){
//         cout<<1<<endl;
//     }
//     else{
//         cout<<0<<endl;
//     }
//   }
//   else{
//     if(m.size()==1 && n%2!=0){
//         cout<<2<<endl;
//         return;
//     }
//     if(m.size()==1 && n%2==0){
//         cout<<1<<endl;
//         return;
//     }
//     if(m.size()==2 && n%2!=0){
//         cout<<1<<endl;
//         return;
//     }
//     if(m.size()==2 && n%2==0){
//         cout<<0<<endl;
//         return;
//     }
//     if(m.size()==3){
//         cout<<0<<endl;
//         return;
//     }
//   }

