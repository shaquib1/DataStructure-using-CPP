
// single inheritance 


#include <iostream>
using namespace std;


class testing{

    public:
    int age;
    strint name;


    int getInfo(int a){

        return age=a;
    }
};


class child: public testing{


}

int main(){

testing obj;
obj.getInfo();

return 0;
}