#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // create stack
    stack<int> s;
    s.push(3);
    s.push(4);

    cout << "printing top element" << s.top() << endl;

    return 0;
}