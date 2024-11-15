

// abstraction means -> Hiding the implementation part and showing only essential part of application or program

// real life-example - email , atm , driving a car

// Data abstraction is one of the most essential and important features of object-oriented programming in C++.
// Abstraction means displaying only essential information and hiding the implementation details.

// way to achive abtraction :  -> by classses and access specifiers
// There are no differences between the specifiers and modifiers, both are same

//-----------Advantages of Abstraction---------------
//  -> Only you can make changes to your data or function, and no one else can.
//  -> It makes the application secure by not allowing anyone else to see the background details.
//  -> Helps the user to avoid writing the low-level code
//  -> Avoids code duplication and increases reusability.
//  ->Can change the internal implementation of the class independently without affecting the user.
//  ->Helps to increase the security of an application or program as only important details are provided to the user.
//  ->It reduces the complexity as well as the redundancy of the code, therefore increasing the readability.

// Ex of abstraction

#include <iostream>
using namespace std;

class abstraction
{

private:
    int x, y;

public:
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }

    void printValues()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};

int main()
{

    abstraction obj;
    obj.setData(34, 44);
    obj.printValues();

    return 0;
}


