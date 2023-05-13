// Reverse alternate elements of the array:

#include <iostream>
using namespace std;

void alternatereverse(int arr[],int size){
    for(int i=0; i<size; i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[10]={93,39,84,74,98,937,24,86,54,21};

alternatereverse(arr, 10);
printarr(arr, 10);


    return 0;
};