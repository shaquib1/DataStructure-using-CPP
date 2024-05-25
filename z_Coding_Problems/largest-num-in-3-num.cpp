#include <iostream>
using namespace std;

int main(){

  int a=34 , b =43 , c=87; 

   if(a>b && a>c){
    cout<<"largest num is:"<<a<<endl;
   }else if(b>a && b>c){
    cout<<"largest num is:"<<b<<endl;
   }else{cout<<"largest num is:"<<c;}

    return 0;
}