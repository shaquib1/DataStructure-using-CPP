
// constructor is invoke/called at object creation time and its no return type
// Constructor is a special method that is authomatically called when an object of a class is created.
// when we create an object then constructor called and the constructor is same as class name
//to create a constructor , use the same name as the class, followed by parentheses()   

/*some characteristic of constructor are:

-> the name of constructor is same as its class name.
-> it is always public - means constructors are mostly declared in the public section of the class
-> it does not have return value; hence they don't have a return type.
->constructor gets called automatically when we create the object of the class.
-> constructor can be overloaded.

*/


/*  Types of construtor mainly

-> Default construtor
-> Parameterized constructor
-> Copy constructor
-> overloaded constructor
*/

#include <iostream>
using namespace std;

class Myclass{
    public:    // Access specifier

   Myclass(){     // constructor  
        cout<<"constructor created";
  }
};

int main(){

 Myclass myobj;    // create an object of myclass (this will call the Myclass construtor automatically)


    return 0;
}