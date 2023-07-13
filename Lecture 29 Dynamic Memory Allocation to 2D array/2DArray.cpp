#include <iostream>
using namespace std;

int main()
{

    int row;
    cin >> row;
    int col;
    cin >> col;
    // creating a 2d Array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // creation done
    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; i++)
        {
            cin >> arr[i][j];
        }
    }
    // taking output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    // how to create a 2D array dynamically
    // input/optput
    // how to frre a memory
    return 0;
}