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

    // declaration of a ponter
    int *ptr = &num;
    cout << "address of num :" << ptr << endl;
    cout << "this print original value of num :" << *ptr;

    // here num and *ptr give the same value
    //*ptr means value of address of ptr
    // ptr means address of a number

    cout << "address of num: " << &num << endl;
    cout << "value is : " << *ptr << endl;
    cout << "value is: " << num << endl;

    // for double value
    double d = 3.4;
    double *pt = &d;

    cout << "Address of d:" << ptr << endl;
    cout << "vaule is: " << *pt << endl;

    // checking size

    cout << "size of integer: " << sizeof(num) << endl;
    cout << "size of pointer: " << sizeof(ptr) << endl; // becaue it contains address of a numnber
    cout << "size of pointer: " << sizeof(pt) << endl;  // becaue it contains address of a numnber

    // another way to declear pointer

    int t = 9;

    int *p = &t;
    cout << p << endl;
    cout << *p << endl;

    // another way but smae output
    int *q = 0;
    q = &t;

    cout << q << endl;
    cout << *q << endl;

    return 0;
}