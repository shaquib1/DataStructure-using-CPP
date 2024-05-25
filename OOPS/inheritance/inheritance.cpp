

// Inheritance is a feature or a process in which, new classes are created from the existing classes.
//The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or
// “parent class”. 
//The derived class now is said to be inherited from the base class.

//--------- real life example -------------
//     -> like a chile inherit some properties from its parent so its eyes, nose likes its father


//Why and when to use inheritance?
//Consider a group of vehicles. You need to create classes for Bus, Car, and Truck. The methods fuelAmount(), capacity(), 
//applyBrakes() will be the same for all three classes. 
//If we create these classes avoiding inheritance then we have to write all of these functions in each of the three classes


// ex of inhertance 
//      class subclass_name : access_mode base_class
//      {
//        // body of subclass
//      };
//      OR
//      class A
//      { 
//      ... .. ... 
//      };
//      class B: public A
//      {
//      ... .. ...
//      };





#include <iostream>
using namespace std;

class human{
    public:
    int height;
    int age;

    
};

class male: public human{

    public:
    string name;

};



int main(){

  male obj;

  cout<<obj.age<<endl;


    return 0;
}