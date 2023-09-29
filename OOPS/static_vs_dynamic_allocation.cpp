// static and dynamic allocation of creating object

#include <iostream>
using namespace std;

class Hero{
    private:
    int rate;


    public:
    int success;
};

int main(){

    // static allocation of creating object
    Hero obj;


    // dynamic allocation of creating object
    Hero *obj = new Hero;

    return 0;
}