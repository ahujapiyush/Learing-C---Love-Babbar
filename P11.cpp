// - patter C++ Program 11 -

// for n = 4
// A A A A
// B B B B
// C C C C
// D D D D

#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}