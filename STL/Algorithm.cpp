#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "finding 4 : " << binary_search(v.begin(), v.end(), 4) << endl;

    cout << "lower bound : " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    cout << "Upper bound : " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 4;
    int b = 6;

    cout << "max :" << max(a, b) << endl;

    cout << "min : " << min(a, b) << endl;

    cout << "swaping: " << endl;

    swap(a, b);
    cout << "a : " << a << endl
         << "b : " << b << endl;

    string str = "abcd";
    cout << "string is : " << str << endl;
    reverse(str.begin(), str.end());
    cout << "after reverse string : " << str << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate vector is :" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    cout << "after sorting vector : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}