
//H M -> constant keyword and funciton

// static keyword is belongs to the class. so object(instance) is not required to acess the static members in cpp
// staic can be fields , method , constructor , class , properties etc.
// without creating object we can access static datamembers or fields
// static data member initialize out of the class with the help of (::)->scope resolution operator

// we can also access the static datamember with the help of object but static keyword is belongs to the class so we access with the help of class

//advantage=> Memory efficient-> because we can access the static fields without creating object. so we don't need to create object for accessing static members,
// so it save the memory 4-8 byte






#include <iostream>
using namespace std;

class Account{

    public:
    int accno;
    string name;
    static float rateOfInterest;
};


float Account::rateOfInterest=8.4;

int main(){

  cout<<"rate of interest is="<<Account::rateOfInterest<<endl;

    return 0;
}