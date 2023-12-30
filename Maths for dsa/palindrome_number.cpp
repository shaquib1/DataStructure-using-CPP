#include <iostream>
using namespace std;

bool check_palindrome(int num){

  int reverse=0 , digit;
   while (num>0)
   {
       digit = num%10;
       reverse = (reverse*10) + digit;
       num=num/10;
     
   }

   if(num = reverse) cout<<"given number is palindrome";
   else cout<<"given number isn't palindrome";
   

}


int main(){

    int num;

    cout<<"enter the number: ";
    cin>>num;
    
    cout<<check_palindrome(num);

    return 0;
}