#include <iostream>
using namespace std;

bool isPresent(int arr[3][3], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
// print row wise sum
void printSum(int arr[][3], int row, int col)
{

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; i < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}
int largestRowSUm(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; i < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is" << maxi << endl;
    return rowIndex;
}

int main()
{
    // create 2D array
    int arr[3][3];

    cout << "Enter the elements : " << endl;
    // taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // taking input ->col wise
    // for (int i = 0; i < 3; i++)
    //    {
    //        for (int j = 0; i < 4; j++)
    //        {
    //            cin >> arr[i][j];
    //        }
    //    }
    // print
    cout << "Printing the array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the element to search" << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 3))
    {
        cout << "element FOund";
    }
    else
    {
        cout << " element NOt FOund";
    }
    printSum(arr, 3, 3);

    int ansIndex = largestRowSUm(arr, 3, 3);
    cout << "Max row is at index" << ansIndex << endl;

    return 0;
}
