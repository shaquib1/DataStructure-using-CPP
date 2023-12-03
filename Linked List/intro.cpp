
// Linkedlist is linear data structure and it is collection of nodes
// a node is a combination of data and address of next node
// dynamic datastructure (grow / shrink at runtime) and no memory waste
// no need of continuous storage
// types of LL->  1. singly LL
//                2. Doubly LL
//                3. Circular LL
//                4. Circular Doubly LL

// in a node there are two part 1. data
//                              2. next -> address of next node


// a node representation in code

class LinkedListNode
{
public:
  int data;
  LinkedListNode *next;
};
