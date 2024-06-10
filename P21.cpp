// find element using binary search


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getPivot(vector<int>& arr , int n){
    int s = 0;
    int e = n-1;
    int mid = s+ (e-s)/2;

    while(s<e){
if(arr[0] <= arr[mid]){
    s =mid + 1;
}else {
    e = mid;
}
mid = s+ (e-s)/2;
    }
    return s;
}
int binarySearch(vector<int>& arr, int start, int end, int k){
    int s = start;
    int e = end-1;
    int mid = s + (e-s)/2;
      
    while(s<=e){
        if(arr[mid] == k){
            return mid;
        }
         if(arr[mid] < k){
s = mid + 1;
        }
        if(arr[mid] > k){
e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr , n);
    if(arr[pivot] <= k && k <= arr[n-1]){
      return  binarySearch(arr, pivot , n , k);
    }else{
       return binarySearch( arr, 0 , pivot , k);
    }
    // Write your code here.
    // Return the position of K in ARR else return -1.
}

int main() {
    vector<int> arr = {5, 6, 7, 1, 2, 3, 4};
    int n = arr.size();
    int k =5;

    int result = search(arr, n, k);
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}
