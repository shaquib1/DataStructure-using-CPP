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