
#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> l;

    l.push_back(3);
    l.push_back(2);
    l.push_back(9);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after erase of element size of list :" << l.size() << endl;

    // coping list into another list
    list<int> n(l);
    // print the list
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> t(5, 1); // it means 5 is size of list and 1 is every element is 1 which is one
    // print this list
    for (int i : t)
    {
        cout << i << " ";
    }

    return 0;
}
