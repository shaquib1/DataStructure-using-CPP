#include <iostream>
using namespace std;

int main(){

  int a; 
  cout<<"enter the num:"<<endl;
  cin>>a;
  
   int divisible=0;

  for(int i=2; i<a/2; i++){
     
     if(a%i==0){
        divisible=1;
     }
     
  }


  if(divisible==0){
    cout<<a<<" is  a prime num"<<endl;
  }else{
    cout<<a<<" is not a prime number"<<endl;
  }
   

    return 0;
}