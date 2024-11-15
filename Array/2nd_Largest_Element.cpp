#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int SecondLargests(int arr[] , int size){

     int largest =-1; 
     int SecondLargest = -1; 

     // first we find larget element
     for(int i=0; i<size; i++){
        largest = max(largest,arr[i]);
     }

     // now find 2nd largest element
     for(int i=0; i<size; i++){
        if(arr[i]>SecondLargest && arr[i]!=largest){
            SecondLargest = arr[i];
        }

     }


     return SecondLargest;
}


int main(){

    int arr[6]={4,8,56,25,97,2};

    int size = sizeof(arr)/sizeof(arr[0]);

     cout<<SecondLargests(arr,size);

    return 0; 
}