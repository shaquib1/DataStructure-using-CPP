#include <iostream>
using namespace std;

class Getter_setter{
    public:
   int health;

   private:
   int name;


   int getter(){
    return name;
   }

   void setter(int health){
        health = 234;
   }
};

int main(){

// create object of the Getter_setter class

Getter_setter obj;

  cout<<"we can access private data member"<<obj.getter();

    return 0;
}