#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int w;
    cin>>w;
    string s;
    cin>>s;
    int mon=4, tue=4, wed=4, thu=4, fri=4, sat=4, sun=4;
    if(w==28){
        mon=4, tue=4, wed=4, thu=4, fri=4, sat=4, sun=4;
        // cout<<"4 4 4 4 4 4 4"<<endl;
        
    }
    else if(w==29){
        if(s=="mon")
        mon++; 
        else if(s=="tue")
        tue++;
        else if(s=="wed")
        wed++;
        else if(s=="thu")
        thu++;
        else if(s=="fri")
        fri++;
        else if(s=="sat")
        sat++;
        else
        sun++;    
    }
    else if(w==30){
        if(s=="mon"){
        mon++; tue++;
        }
        else if(s=="tue"){
        wed++; tue++;
        }
        else if(s=="wed"){
        wed++; thu++;
        }
        else if(s=="thu"){
        fri++; thu++;
        }
        else if(s=="fri"){
        fri++; sat++;
        }
        else if(s=="sat"){
        sun++; sat++;
        }
        else{
        sun++; mon++;
        }
    }
    else{
        if(s=="mon"){
        mon++; tue++; wed++;
        }
        else if(s=="tue"){
        wed++; tue++; thu++;
        }
        else if(s=="wed"){
        wed++; thu++; fri++;
        }
        else if(s=="thu"){
        sat++; thu++; fri++;
        }
        else if(s=="fri"){
        fri++; sat++; sun++;
        }
        else if(s=="sat"){
        sun++; sat++; mon++;
        }
        else{
        sun++; mon++; tue++;
        }
    }
    cout<<mon<<" "<<tue<<" "<<wed<<" "<<thu<<" "<<fri<<" "<<sat<<" "<<sun<<endl;

}
return 0;
}