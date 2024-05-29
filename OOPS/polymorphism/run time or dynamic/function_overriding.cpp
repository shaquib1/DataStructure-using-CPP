

// Method overriding is a feature that allows you to redefine the parent class method in the child class based on the 
//its requirement.
// Rules for method overriding 
// -> the parent class method and the method of the child class must have the same name
// -> the parent class method and the method of the child class must have the same parameters
// -> it is possible through inheritance only


// ex of function overriding

#include <iostream>
using namespace std;



class Animal{

    
    public:
    
     void speak(){
        cout<<" animals are speaking"<<endl;
     }

    

};

 class dog: public Animal{
   public:
   void speak(){
      cout<<"dogs are barking"<<endl;
   }

 };

int main(){
    
Animal obj1;
dog obj2;

obj1.speak();
obj2.speak();



    return 0;
}