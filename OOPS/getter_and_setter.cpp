// Getter and setter function are used to use private datamembers from a class to out of the class

#include <iostream>
using namespace std;

class Hero{

  // properties

    private:
   int health;

   public:
   int level;


   int getHealth(){   // creating getter funciton 
    return health;
   }

   int getLevel(){
        return level;
   }

   void setterHealth(int h){    // creating setter function
       health = h;
   }

   void setterLevel(int l){
    level =l;
   }
};

int main(){

// create object of the Getter_setter class

Hero mgobj;

  cout<<"we can access private data member : "<<mgobj.getHealth()<<endl;  // it means we get private data member 


 mgobj.setterHealth(234);
  cout<<"we can set the value of private data member :"<< mgobj.setterHealth()<<endl;    // it means we set the value of private data member

    return 0;
}