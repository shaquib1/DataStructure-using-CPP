

//Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. 
//i.e one subclass is inherited from more than one base class.


//  Syntax
// class subclass_name : access_mode base_class1, access_mode base_class2, ....
// {
//   // body of subclass
// };
// class B
// { 
// ... .. ... 
// };
// class C
// {
// ... .. ...
// };
// class A: public B, public C
// {
// ... ... ...
// };


// C++ program to explain 
// multiple inheritance 
#include <iostream> 
using namespace std; 

// first base class 
class Vehicle { 
public: 
	Vehicle() { cout << "This is a Vehicle\n"; } 
}; 

// second base class 
class FourWheeler { 
public: 
	FourWheeler() 
	{ 
		cout << "This is a 4 wheeler Vehicle\n"; 
	} 
}; 

// sub class derived from two base classes 
class Car : public Vehicle, public FourWheeler { 
}; 

// main function 
int main() 
{ 
	// Creating object of sub class will 
	// invoke the constructor of base classes. 
	Car obj; 
	return 0; 
}
