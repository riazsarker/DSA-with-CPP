#include <iostream>
using namespace std;
int score = 15;

void a(int &i)
{
    cout << score << "In a " << endl;
    cout << i << endl;
}
int main()
{
    cout << score << "in main" << endl;
    int i = 5;
    a(i);

    return 0;
}