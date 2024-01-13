

// a constructor which have parameters is called parameterized constructor.
// it is used to initialize the data members of an object to specific.

#include <iostream>
using namespace std;

class Employee{

public:
int id;
string name;

Employee(int i , string n){
    id=i;
    name=n;
}

void print(){
    cout<<"id is : "<<id<<endl;
    cout<<"name is : "<<name<<endl;
}

};

int main(){
 
 Employee obj(11202615 , "shaquib");

obj.print();

    return 0;
}