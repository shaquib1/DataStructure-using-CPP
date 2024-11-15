
// c++ class and object example
#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salaray;
    void insertValue(int i, string s, float f)
    {
        id = i;
        name = s;
        salaray = f;
    }
    void displayFunction()
    {
        cout << "id:" << id << " "
             << "name: " << name << " "
             << "salary: " << salaray;
    }
};

int main(void)
{
    Employee obj;
    obj.insertValue(11202615, "shaquib", 234543);
    obj.displayFunction();

    return 0;
}