

// For example, we can make use of the addition operator (+) for string class to concatenate two strings.
// We know that the task of this operator is to add two operands. So a single operator ‘+’, when placed between integer operands,
// adds them and when placed between string operands, concatenates them. 

// but if we want to + operator is used to subtract two operands we can use in operator overloading

#include <iostream> 
using namespace std;


class test{

// way to write operator overloading code
   // return_type operator (which operator want to use) (input){  // code }

public:

  void operator() (){

    cout<<"operator overloading which is bracket operator"<<endl;
  }


};


int main(){

   test obj1;

   obj1();


    return 0;
}