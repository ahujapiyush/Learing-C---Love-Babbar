// C++ program to access the top
// element of priority queue
#include <iostream>
#include <queue>
using namespace std;

// Driver code
int main()
{
// create a priority queue of int
priority_queue<int> numbers;

// add items to priority_queue
numbers.push(1);
numbers.push(20);
numbers.push(7);

// get the element at the top
cout << "Top element: " << 
		numbers.top();
return 0;
}
