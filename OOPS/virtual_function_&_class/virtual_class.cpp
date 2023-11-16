
// example

// Syntax 1:
// class B : virtual public A 
// {
// };
// Syntax 2:
// class C : public virtual A
// {
// };


// C++ program to illustrate
// concept of Virtual Functions

// #include <iostream>
// using namespace std;

// class base {
// public:
// 	virtual void print() { cout << "print base class\n"; }

// 	void show() { cout << "show base class\n"; }
// };

// class derived : public base {
// public:
// 	void print() { cout << "print derived class\n"; }

// 	void show() { cout << "show derived class\n"; }
// };

// int main()
// {
// 	base* bptr;
// 	derived d;
// 	bptr = &d;

// 	// Virtual function, binded at runtime
// 	bptr->print();

// 	// Non-virtual function, binded at compile time
// 	bptr->show();

// 	return 0;
// }
