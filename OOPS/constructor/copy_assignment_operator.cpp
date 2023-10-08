
#include <iostream>
using namespace std;


class Test{

  private:
  int id;
  string name;


public:

  Test(int i ,string n){
    id=i;
    name=n;
}

void print(){
    cout<<"id is = "<<id<<endl;
    cout<<"name is ="<<name<<endl;
}

};


int main(){

Test a(15 , "shaquib");
a.print();

Test b(23,"rock");
b.print();


// after we use copy assignment operator than both objects value is same

a=b;

cout<<"after using assignment operator"<<endl;


 a.print();
 b.print();

  return 0;
}