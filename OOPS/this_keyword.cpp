
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

Test(){
  cout<<"address of this:"<<this<<endl;    // this is for testing of address of this keyword and current object is equal
}

   void print(){
    cout<<"use of this keyword"<<endl;
    cout<<"name is:"<<name<<endl;
    cout<<"id is:"<<id<<endl;
   }
};

int main(){

Test obj(11202615 , "shaquib");

Test b;
cout<<"address of b:"<< &b<<endl;  // so we make a new obj to check address of this keyword and current obj

obj.print();

    return 0;
}