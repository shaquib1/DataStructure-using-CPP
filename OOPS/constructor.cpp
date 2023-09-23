// when we create an object then constructor called and the constructor is same as class name

#include <iostream>
using namespace std;


class Myclass{
    public:

    string name;
    int age;

  void testing(){
    name= "shaquib";
    age=34;
  }
};

int main(){

 Myclass myobj;

 myobj.testing();
    return 0;
}