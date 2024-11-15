// #include <iostream> 
// using namespace std;

// int main(){

// //    cout<<"because today is start again my coding journey so anything you can print"<<endl;

// //    for(int i=0; i<45; i++){
// //     cout<<"do you know from today i start my coding journey fron level 0, because a person said if you have ability to start from 0 than you do anything in your life. keep it up bro"<<endl;
// //    }
 

//   cout<<"now we perform coditioning part of programming:"<<endl;
//   cout<<"Now we cheking the last 3rd number is greater than or not than first two numbers sum :"<<endl;
//   int a,b,c;
//   cin>>a;
//   cin>>b;
//   cin>>c;
  
//   if(a+b<c){
//     cout<<"condition is true 3rd no is greater than firsts two numbers sum";
//   }else{
//     cout<<"condition is false ";
//   }


//     return 0; 
// }





#include<iostream>
using namespace std;

int main(){

// this is practice program for revice

  int size;
  int arr[10];
  cout<<" enter the size the of array:";
  cin>>size;
  cout<<"enter the elements of the array:";
// this for loop is for taking array elements 
  for(int i=0; i<size; i++){
    cin>>arr[i];

  }

// and this for loop is printing the array:
for(int i=0; i<size; i++){
  cout<<arr[i]<<" ";
}

// this loop is for rotate array 
for(int i=size; i>=0; i--){
  cout<<arr[i]<<" ";
}

  return 0;
}