#include<iostream>
using namespace std;
class emp{
//   private:
  public:
  int sal;
  int empid;
  void setdata(int a, int b){
      int a,b;
      sal = a;
      empid = b;
      int sal=132;
      int empid=1;
  }
  void getdata(){
      cout<<sal<<endl;
      cout<<empid<<endl;
  }
};
int main(){
emp anshu;
anshu.setdata();
// anshu.setdata(123,2);   
anshu.getdata();
return 0;
}