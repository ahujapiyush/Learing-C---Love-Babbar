#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        // Print the left half
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }

        // Print the middle part
        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << "* ";
        }

        // Print the right half
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
