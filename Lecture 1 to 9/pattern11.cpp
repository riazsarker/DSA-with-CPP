#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;

int row =1;
while(row<=n){
int col =1;
char value='A';

while(col<=row){


cout<<value;
value++;
col++;
}
cout<<endl;
row++;
}
}


