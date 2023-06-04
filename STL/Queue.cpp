#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<string> q;
    q.push("areesha");
    q.push("shreya");
    q.push("shahil");

    cout << "print front element : " << q.front() << endl;
    cout << "print back element : " << q.back() << endl;

    q.pop(); // deleting element from queue

    cout << "after deleting element check size of queue : " << q.size();

    return 0;
}