#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{
    // base case
    // element not found
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    // element found
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 16};
    int size = 5;
    int key = 16;

    cout << "Present Or Not " << binarySearch(arr, 0, 5, key);

    return 0;
}