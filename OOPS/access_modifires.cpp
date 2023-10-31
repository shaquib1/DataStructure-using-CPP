
//---------------  Access Modifier-----------------


// it means data members where can be access inside class or outof class and scope of data member which describe the access modifires
// There are three type of access modifires a> public b> private c> protected

#include <iostream>
using namespace std;

class Car
{

public: // it means below this public access modifiers all data member of the class is public means it can be use outof the class and inside the class
    int age;
    char name;

private: // it means below the private access modifiers all data member of the class is private means it can be use or modify in inside this class only not out of this class
    int profit;
    char food;

    // but when we not declaring access modifires by default access modifirs is private so decleare your access modifires
};

int main()
{

    Car obj;
    obj.age = 33;

    cout << "here is public modifires:" << obj.age << endl;       // age can be accessed because it is public
    // cout<<"private modifires : "<<obj.food;                   // food is privarte so it can't call

    return 0;
}
