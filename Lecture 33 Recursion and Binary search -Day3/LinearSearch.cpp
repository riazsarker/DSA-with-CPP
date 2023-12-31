#include <iostream>
using namespace std;
bool linearSearch(int *arr, int size, int k)
{
    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, k);
    }
}
int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 2;
    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }
    return 0;
}