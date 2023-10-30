

//Hierarchical Inheritance: In this type of inheritance, more than one subclass is inherited from a single base class.
// i.e. more than one derived class is created from a single base class.


// Syntax:-

// class A  
// {  
//     // body of the class A.  
// }    
// class B : public A   
// {  
//     // body of class B.  
// }  
// class C : public A  
// {  
//     // body of class C.  
// }   
// class D : public A  
// {  
//     // body of class D.  
// }   





// C++ program to implement 
// Hierarchical Inheritance 
#include <iostream> 
using namespace std; 

// base class 
class Vehicle { 
public: 
	Vehicle() { cout << "This is a Vehicle\n"; } 
}; 

// first sub class 
class Car : public Vehicle { 
}; 

// second sub class 
class Bus : public Vehicle { 
}; 

// main function 
int main() 
{ 
	// Creating object of sub class will 
	// invoke the constructor of base class. 
	Car obj1; 
	Bus obj2; 
	return 0; 
}
