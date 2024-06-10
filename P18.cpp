// find duplicate number of an array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];
    int duplicates[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicates[i] = arr[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (duplicates[i] != 0)
        {
            cout << duplicates[i] << " ";
        }
    }
}