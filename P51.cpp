#include<iostream>
using namespace std;

bool isSorted(int* arr , int size){
    // base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr + 1 , size - 1); 
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);

    bool ans = isSorted(arr,size);
    if(ans){
        cout << "true"<<endl;
    }
    else{
        cout << "false"<<endl;
    }
    return 0;
}