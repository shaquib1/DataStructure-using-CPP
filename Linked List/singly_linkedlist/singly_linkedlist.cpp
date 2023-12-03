
// in this only one pointer to go
// 1st node called Head
// each node or element is connect only to its next next node/element using a pointer

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

int main()
{

  // in this we create dynamically allocation object

  Node *node1 = new Node(12);

  cout << node1->data << endl;
  cout << node1->next << endl;

  return 0;
}