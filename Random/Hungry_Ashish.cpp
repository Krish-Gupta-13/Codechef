//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llf long long float
#define PIZZAes cout<<"PIZZAES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
int main(){
ll t;
cin>>t;
while(t--){
ll count = 0;
vector<int> v;
vector<int> b;
int PAISA,PIZZA,BURGER;
cin>>PAISA>>PIZZA>>BURGER;
if(PAISA>=PIZZA){
    cout<<"PIZZA"<<endl;
}
else if(PAISA>=BURGER && PIZZA>BURGER){
    cout<<"BURGER"<<endl;
}
else if(PAISA<PIZZA && PAISA<BURGER){
    cout<<"NOTHING"<<endl;
}
// else if(PAISA>PIZZA && PAISA>z && PIZZA==z){
//     cout<<"PIZZA"<<endl;
// }

}
return 0;
}
