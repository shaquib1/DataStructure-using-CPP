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