

// it is very important topic for solving problems for arrays
// it is a key value pair data structure

#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> m;

    m[1] = "shaquib";
    m[2] = "areesha";
    m[3] = "gopi";
    m.insert({5, "shreya"});

    cout << "before erase" << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 5 or not: " << m.count(5) << endl;

    // after erase 5
    m.erase(5);
    cout << "after erase 5: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << "check element is present or not : " << m.count(3) << endl;

    // learn iterator and implement some more example

    return 0;
}