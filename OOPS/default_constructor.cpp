
// when we create a class than same name as class a constructor create bydefault called default constructor or A constructor which has no argument is known as default constructor
// it is invoked at the time of object creation 
// we can also create our constructor

#include <iostream> 
using namespace std;

class Testing{
    public:
    Testing(){
        cout<<"default constructor is called"<<endl;
    }
    
};

int main(){

Testing myobj;   // here constructor called by default when we create object myobj 
Testing a;

    return 0;
}