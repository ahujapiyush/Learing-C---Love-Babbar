#include <iostream>
using namespace std;

// - patter Program 9 -

// for n = 4

// 1
// 2 3
// 3 4 5
// 4 5 6 7
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}