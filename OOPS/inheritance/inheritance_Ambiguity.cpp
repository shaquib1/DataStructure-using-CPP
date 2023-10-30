


//Ambiguity can be occurred in using the multiple inheritance when a function 
//with the same name occurs in more than one base class.

// when two function with the same name present in a child class and we want to access a function 
//then it results in ambiguity because the compiler gets confused about which base’s class member function should be called. 




// C++ program to show inheritance ambiguity

// #include<iostream>
// using namespace std;

// // Base class A

// class A {
// 	public:

// 	void func() {
// 		cout << " I am in class A" << endl;
// 	}
// };

// // Base class B

// class B {
// 	public:

// 	void func() {
// 		cout << " I am in class B" << endl;
// 	}
// };

// // Derived class C

// class C: public A, public B {


// };

// // Driver Code

// int main() {

// 	// Created an object of class C

// 	C obj;

// 	// Calling function func()

// 	obj.func();

// 	return 0;
// }


 // Here if we run this code than an error occur is error: request for member ‘func’ is ambiguous






//--------------solution of ambiguity------------------

// Solution to  Ambiguity:
// To solve this ambiguity scope resolution operator is used denoted by ‘ :: ‘

// Syntax:

// ObjectName.ClassName::FunctionName();



// code with solution of ambiguity

// C++ program to resolve inheritance
// ambiguity

#include<iostream>
using namespace std;

// Base class A

class A {
	public:

	void func() {
		cout << " I am in class A" << endl;
	}
};

// Base class B

class B {
	public:

	void func() {
		cout << " I am in class B" << endl;
	}
};

// Derived class C
class C: public A, public B {


};

// Driver Code

int main() {

	// Created an object of class C
	C obj;

	// Calling function func() in class A
	obj.A::func();

	// Calling function func() in class B
	obj.B::func();

	return 0;
}
