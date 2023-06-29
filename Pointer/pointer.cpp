#include <iostream>
using namespace std;

int main()
{


// for checking address of a number
    int num = 33;

    cout << num << endl;

    // symbol of adress is &

   // cout << "Adress of num is : " << &num << endl;

    // pointer stores address

    //declaration of a ponter 

    int *ptr=&num;
    cout<<"address of num :"<<ptr<<endl;
    cout<<"this print original value of num :"<<*ptr;

    // here num and *ptr give the same value
    cout<<"address of num: "<<&num<<endl;
    cout<<"value is : "<<*ptr<<endl;
    cout<<"value of num: "<<num<<endl;

    return 0;
}