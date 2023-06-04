
// build a queue which first element is greatest and vice versa
// based on  min heap and max heap

#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // max-heap

    priority_queue<int> maxi;

    // min-heap

    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(3);
    maxi.push(2);
    maxi.push(7);
    maxi.push(4);
    maxi.push(8);

    cout << "size of the queue : " << maxi.size() << endl;

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {

        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(3);
    mini.push(2);
    mini.push(7);
    mini.push(4);
    mini.push(8);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {

        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "check queue is empty or not :" << mini.empty();

    return 0;
}