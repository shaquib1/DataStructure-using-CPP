
//insertion sort by which we can sort an array in which time complaxity is very less than other sorting algorithm.


#include <iostream>
using namespace std;


void insertionsort(int n, int arr[]){

    int i,j;

for( i=1; i<n; i++)
int temp=arr[i];


for(j=i-1; j>=0; j--){

if(arr[j]>temp){

    arr[j+1]=arr[j];
}else{
    break;
}

arr[j+1]=arr[j];
}

for(int i=0; i<n-1; i++){
    cout<<"arr[i]"<<" ";
}
    
}


int main(){

int arr[100];
int n;
cout<<"enter the size of the array : ";

cin>>n;

cout<<"enter the elements of the array : ";
for(int i=0; i<n; i++){

    cin>>arr[i];
}


insertionsort(n,arr);


    return 0;
}