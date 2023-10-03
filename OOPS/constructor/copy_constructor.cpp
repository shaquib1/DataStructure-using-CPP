//copy constructor is used to copy data of one object to another 
// its two type 
// 1> default copy constructor - when a class create then compilor create the default copy constructor
// 2> user defined constructor - user can defines the user-defined constructor

// -> vvi point ->  in this we use "pass by reference " because when we pass the constructor then an infinity loop occur


#include <iostream>
using namespace std;


class Hero{
    
    private:
    int length;
    int height;

  public:

  Hero(int len , int hgt){
    length = len;
    height = hgt;
  }

    //copy constructor with Hero object as parameter
    // copies data of the obj parameter
    Hero(Hero & obj){
        length = obj.length;
        height = obj.height;
    }

    int print_obj(){
       
    return height * length;
    }

};


int main(){

  Hero obj1(7 , 3);

cout<<"area of obj1:"<<obj1.print_obj()<<endl;


// copy constructor
 Hero obj2(obj1);
 cout<<"area of obj2 :"<<obj2.print_obj();

    return 0;
}


