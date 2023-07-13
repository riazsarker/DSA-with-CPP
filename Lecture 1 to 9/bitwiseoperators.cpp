#include <iostream>
using namespace std;


int main(){
  int a=4;
  int b=6;

  cout<<"a&b"<<(a&b)<<endl;
  cout<<"a|b"<<(a|b)<<endl;
  cout<<"~b"<<(~b)<<endl;
  cout<<"a^b"<<(a^b)<<endl;

  cout<<(17<<1)<<endl;
  cout<<(17>>1)<<endl;
  int sum,i=3;
  sum=a+(i++);
  cout<<sum<<endl;
  cout<<i;

}
