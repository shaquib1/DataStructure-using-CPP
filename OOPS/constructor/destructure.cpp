// destructure means deallocate(free) the memory
//  -> when scope of the object is end than destructure called of the object
//  when a class is created then its destructure also created  (also user can create the destructure)
//  same name as class name
//  no  any return type
//  no input parameter
//  same as it is called at once same as constructor



#include <iostream>
using namespace std;

class Hero
{

private:
    int age;
    char name;

public:
    // this is constructor
    Hero()
    {
        cout << "constructor is called" << endl;
    }

    // destructure
    ~Hero()
    {
        cout << "destructor is called" << endl;
    }
};

int main()
{

    // static allocation to create object
    Hero obj1; // for static allocation destructure automatically called
    Hero obj2;

    // dynamic allocation to creating object
    // Hero *a1 = new Hero();      // for dynamic allocation destructure manually  called
    // Hero *a2 = new Hero();

    // delete a2;

    return 0;
}