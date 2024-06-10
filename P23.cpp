// buuble sort

#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
int main(){
    int arr[] = {32,43,24,221,234,5,312,34,4,0,1};
    int size = sizeof(arr)/sizeof(int); 

    bubbleSort(arr,size);

    for(int i:arr){
        cout << i << " ";
    }
}