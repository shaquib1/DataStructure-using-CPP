#include <iostream>
using namespace std;

class test{
public:
   string course;
   int id;

   int check(){
    cout<<"student is allowed in exam or ";
   }
};

int main(){
    test myobj;
    cout<<myobj.check();
}