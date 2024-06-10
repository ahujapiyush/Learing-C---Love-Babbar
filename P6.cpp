#include <iostream>
using namespace std;

// pattern for n=4 -
// 1234
// 1234
// 1234
// 1234

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}