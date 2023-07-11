
Ritik Sharma
6 months ago
1:01:40  (code of last question "Dabangg  Pattern" is)
:---)
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    //first triangle
    int i =1;
        while(i<=n){
            int j=1;
            while(j<=n-i+1){
                cout<<j;
                j=j+1;
            }
    //second triangle
            int start=2*(i-1);
            while (start){
                cout<<'*';
                start--;
            }
    //third triangle
            int k=1;
            while(k<=n-i+1){
                cout<<n-i-k+2;
                k=k+1;
            }
            cout<<endl;
            i=i+1;
        }
}
