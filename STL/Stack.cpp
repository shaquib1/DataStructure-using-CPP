
#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;
    s.push("shaquib");
    s.push("areesha");
    s.push("shreya");
    s.push("prachi");

    cout << "print top element:" << s.top() << endl;

    s.pop();

    // after deleting element check size of stack

    cout << "size of stack : " << s.size() << endl;

    // check stack empty or not

    cout << "stack empty or not : " << s.empty();

    return 0;
}