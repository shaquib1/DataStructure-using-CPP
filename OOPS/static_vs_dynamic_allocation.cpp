#include <iostream>
using namespace std;

class Hero{
    private:
    int rate;


    public:
    int success;
};

int main(){

    // static allocation 
    Hero obj;


    // dynamic allocation
    Hero *obj = new Hero;

    return 0;
}