#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

int main()
{

    // declare
    int number[15];

    // accessing an array
    // cout << "Value at 1 index" << number[1] << endl;

    // initialising array

    int second[3] = {5, 4, 3};
    // cout << "Value at 1 index" << second[1] << endl;
    int n = 15;
    cout << "printing the array" << endl;
    // print the array
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << second[i] << " ";
    // }
    int third[10] = {0};
    // printArray(third, 10);

    int thirdSize = sizeof(third) / sizeof(int);
    // cout << "Size of Third is" << thirdSize << endl;
    char ch[5] = {'a', 'b', 'c'};

    return 0;
}