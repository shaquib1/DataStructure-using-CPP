

#include <iostream>
using namespace std;


void reverse(int arr[], int n){

    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

  void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
  }

int main(){

// int n;
// int arr[10];
// cout<<"Enter the element:";
// for(int i=0; i<10; i++){
//     cin>>arr[i];
// }

int arr[10] ={4,78,4,877,7,56,32,25,79,36};

  reverse(arr,10);
  printarr(arr,10);

}