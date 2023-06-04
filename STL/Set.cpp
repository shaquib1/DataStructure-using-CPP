

// it contains unique value

#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(4);
    s.insert(4);
    s.insert(7);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(9);
    s.insert(9);
    s.insert(1);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << "erase one element: " << endl;
    s.erase(s.begin());

    for (auto i : s)
    {
        cout << i << endl;
    }

    cout << "check 5 is present or not : " << s.count(5) << endl;

    // learn iterator and implement find(),begin() .

    return 0;
}
