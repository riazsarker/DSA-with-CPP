#include <iostream>
using namespace std;
void update(int **p2)
{
    // p2 = p2 + 1;
    //*p2 = *p2 + 1;
    **p2 = **p2 + 1;
}

int main()
{
    /*

int i = 5;
int *p = &i;

int **p2 = &p;

cout << "Printing P" << p << endl;
cout << "address of p" << &p << endl;

cout << i << endl;
cout << *p << endl;
cout << **p2 << endl;

cout << &i << endl;
cout << p << endl;
cout << *p2 << endl;

cout << &p << endl;
cout << p2 << endl;

cout << "before " << i << endl;
cout << "before " << p << endl;
cout << "before " << p2 << endl;

update(p2);

cout << "after " << i << endl;
cout << "after " << p << endl;
cout << "after " << p2 << endl;
*/
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;
    return 0;
}