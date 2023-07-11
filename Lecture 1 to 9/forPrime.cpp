#include <iostream>
using namespace std;


int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

for(int i=2;i<n;i++){
if(n%i==0){
cout<<"NOt a  prime number";
break;
}
else{
    cout<<"Prime";
    break;
}
}
}
