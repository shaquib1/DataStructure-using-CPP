#include <iostream>

using namespace std;

int main(){


    int arr[100], x, sum=0;

   cout<<"Enter the size of the array: ";
   cin>>x;
   cout<<"Enter the" << x << "array elements:";

   for(int i=0; i<x; i++){

    cin>>arr[i];
    sum=sum+arr[i];
   }
   
   
cout<<"sum of all number is: "<<sum;
   
   return 0;

   }