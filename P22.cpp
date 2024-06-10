//selection sort
#include <iostream>
using namespace std;

void swapNum(int *a,int *b ){
int temp = *a;
*a = *b;
*b = temp;

}
void selectionSort(int arr[],int size){
    int minIndex = -1;
for(int i=0;i<size-1;i++){
   int minIndex = i; //63
    for(int j=i+1;j<size;j++){
    if(arr[minIndex] > arr[j]){
        minIndex = j;
    }
    }
    swapNum(&arr[i],&arr[minIndex]);

cout<<"After Swap" << endl;
 for(int k =0 ; k< size;k++ ){
        cout<< arr[k] << " ";
    }
}
// 1 63 43 53 534 54 3 32 5
}
int main(){

    int arr[] = {63, 43, 53, 53, 54,32,53,3,5};
    int size = sizeof(arr)/sizeof(int);

    selectionSort(arr,size);
    cout<<endl;
    for(int i:arr){
        cout<<i << " ";
    }
    return 0;
}