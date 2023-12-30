#include <iostream>
using namespace std;


int main(){
    
      int arr[4]= {3, 5 , 34 , 43};
      int a = arr[0]+2*sizeof(arr[0]);
      cout<<"address of 2nd index: "<<a<<endl;
      cout<<"value of 2nd index :"<<arr[2];

    return 0;
}