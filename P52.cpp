#include <iostream>

using namespace std;

bool linearSearch(int *arr, int size, int k)
{

    if (size == 0)
        return false;

    if (arr[0] == k)
        return true;

    else
    {
        return linearSearch(arr + 1, size - 1, k);
    }
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(int);
    int k = 10;
    int ans = linearSearch(arr, size, k);
    if (ans)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}