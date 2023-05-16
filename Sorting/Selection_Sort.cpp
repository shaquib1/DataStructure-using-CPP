#include <iostream>
using namespace std;


int arrSort(int arr[], int n){

    for(int i=0; i<n-1; i++){

        int minIndex=i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
    
    
}

int printArray(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}

int main(){

    int arr[100];
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<"enter the elements of the array : ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    arrSort(arr,n);
   
   cout<<"sorted array is : ";
    printArray(arr,n);

    return 0;
}