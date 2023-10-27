

// function overloading - it is a compile time polymorphism | static polymorphism
// when we have two functions with the same name but different input parameters called function overloading.
// function overloading can be achieved by two ways:
// 1> the names of the functions and return types are the same, but differ in the type fo parameters.
// 2> the name of the funcitons and return types are the same , but they differ in the number of parameters



// ex of function overloading

#include <iostream>
using namespace std;



class test{

    int x=24;
    double b =9.4;

    public:
    
     void add(int y){
        cout<<"add of x and y is: "<<x+y<<endl;
     }

     // differ in the type of parameter
     void add(double a){
        cout<<"add of a and b is:"<<a+b<<endl;
     }

     // differ in the number of parameter
     void add(int y , double d){
        cout<<"add of x , y ,a and b is: "<< d+b+x+y<<endl;
     }


};


int main(){
    
test obj;

 obj.add(3);
 obj.add(8.9);
 obj.add(34 , 34.8);

    return 0;
}