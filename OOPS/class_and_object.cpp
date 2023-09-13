#include <iostream>
using namespace std;

class test          // here test is the class
{                 
public:            // public is the access modifier
    string course; // data members
    int id;

    int check()  // member function
    { 
        cout << "student is allowed in exam whose id is check in file";
    }
};

int main()
{

    // creating object
    test myobj; // here myobj is the object of test class and it is a creating method of object

    cout << "size of object is: " << sizeof(myobj) << endl; // size of the object is total size of all properties of class
    //  *Note : when class is empty means class have not any properties and then we create a object of the class than size of the object is 1

    cout << myobj.check();
}