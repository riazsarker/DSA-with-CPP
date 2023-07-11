#include<iostream>
using namespace std;


int bit(int n1, int n2){
    int count = 0;

    while(n1 != 0 && n2 != 0){
        if(n1 & 1 || n2 & 1) {
            count++;
        }
        n1 >> 1;
        n2 >> 1;
    }

    return count;
}


int main() {

    int a;
    cin >> a;

    int b;
    cin >> b;

    cout << bit(a,b);
    return 0;
}
