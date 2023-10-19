

// 



#include <iostream>
using namespace std;

class human{
    public:
    int height;
    int age;

    
};

class male: public human{

    public:
    string name;

};



int main(){

  male obj;

  cout<<obj.age<<endl;


    return 0;
}