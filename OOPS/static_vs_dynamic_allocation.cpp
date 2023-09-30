// static and dynamic allocation of creating object

#include <iostream>
using namespace std;

class Hero{

// datamembers

    private:
   int health;

   public:
   int level;
   int test;


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

    // static allocation of creating object
    Hero a;
     a.setterHealth(12);
    cout<<"health is:"<<a.getHealth()<<endl;

    // dynamic allocation of creating object
    Hero *obj = new Hero;
    obj->setterHealth(432);

    obj->test=89;
      cout<<"so test value is:"<<obj->test<<endl;
     cout<<"Health is:"<<(*obj).getHealth()<<endl;


    return 0;
}