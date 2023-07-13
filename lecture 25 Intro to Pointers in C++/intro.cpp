#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    // addres of Operator- &

    cout << "address of num is " << &num << endl;

    int *ptr = &num;
    cout << "Value is : " << *ptr << endl;
    double d = 4.5;
    double *p2 = &d;
    cout << "Address is : " << p2 << endl;
    cout << "Value is: " << *p2 << endl;
    cout << "Size of integer is " << sizeof(num) << endl;

    return 0;
}