
// when we create a class than same name as class a constructor create bydefault call default constructor
// we can also create constructor

#include <iostream> 
using namespace std;



class Testing{
    public:
    int data;


 private :
 string name;
};

int main(){

Testing obj;
 int ans = obj.data=345;
 cout<<ans;


    return 0;
}