
// this keyword is a pointer which stored of the address of the current object of a class
// it is used to accessing member variables, 
//Resolving variable shadowing->means two variable with the smae name,
//calling other member functions

#include <iostream>
using namespace std;


class Test{

    public:

    int id;
    string name;

  Test(int id, string name){
    this->id=id;
    this->name=name;
  }


   void print(){
    cout<<"use of this keyword"<<endl;
    cout<<"name is:"<<name<<endl;
    cout<<"id is:"<<id<<endl;
   }
};

int main(){

Test obj(11202615 , "shaquib");

obj.print();

    return 0;
}