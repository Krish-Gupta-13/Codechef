#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#define F first 
#define S second
#define loop0(i,n) for(int i=0;i<n;i++)
#define loopab(i,a,b) for (int i=a;i<b,i++)
#define TC(T)   while(T--)
#define pi  3.14 
#define max_i 1e9
#define max_li 1e12
#define max_ll 1e18
#define mxi INT_MAX
#define mni INT_MIN  
#define fixed fx
#define p(x) setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> p_ii;
typedef pair<ll,ll> p_ll;
typedef pair<int,string> p_is ;
typedef vector<p_ii> v_pii;



void solve()
{
  v_pii k;
  ll x,y;
  ll arr[4]; 
  for(int i=0 ;i<4; i++){
    cin>>arr[i];}
  int flag=0;
 for(int i=0 ; i<4; i++){
    for(int j=0;j!=i && j<4;j++)
    {
      x=(arr[i]+arr[j])/2;
      y=(arr[i ]-x);
      if((arr[i]-arr[j])/2 == y){
        k.push_back({x,y});
        flag=1;
      }
  }
    }
    cout<<x<<" "<<y<<endl;
//   if(flag==1)
//     loop0(i,4){
//       if(x*y==arr[i]) flag=1;
//       else if(x/y==arr[i] && y!=0) flag++;
//     }
//   if(flag!=2) cout<<-1<<" "<<-1<<endl;
//   else  cout<<x<<" "<<y<<endl;
}
int main()
{
  int T;  cin>>T;
  TC(T)
    solve();
    return 0;
}
