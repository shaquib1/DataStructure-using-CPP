#include <iostream>
using namespace std;

// object is a entity which have properties/states and behaviour ex- laptop , watch etc
// class is a user define data type or blueprint
// object is an instance of class


class test          // here test is the class
{   
    // bydefault all data members and member functions are private so we use public access modifier so we use data member out of the class               
public:            // public is the access modifier
   // properties:
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