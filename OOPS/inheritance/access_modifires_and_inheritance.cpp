


// Mode of inheritance 

// 1. Public mode:If we derive a subclass from a publicbase class. Then, the base class’s public members will become public in the derived class, 
//    and protected class members will become protected in the derived class.


// 2. Protected mode:If we derive a subclass from a Protected base class. Then both public members 
//    and protected members of the base class will become protected in the derived class. 


// 3. Private mode:If we derive a subclass from a Privatebase class. Then both public members 
//    and protected members of the base class will become Private in the derived class.


/*

Base Clss member Access Specifier      Public                    Protected                     Private
    
      Public                           Public                    Protected                     Private
      Protected                        Protected                 Protected                     Private
      Private                          Not Accessible            Not Accessible                Not Accessible


*/



// ex of this 

// C++ Implementation to show that a derived class 
// doesn’t inherit access to private data members. 
// However, it does inherit a full parent object. 
class A { 
public: 
	int x; 

protected: 
	int y; 

private: 
	int z; 
}; 

class B : public A { 
	// x is public 
	// y is protected 
	// z is not accessible from B 
}; 

class C : protected A { 
	// x is protected 
	// y is protected 
	// z is not accessible from C 
}; 

class D : private A // 'private' is default for classes 
{ 
	// x is private 
	// y is private 
	// z is not accessible from D 
};
