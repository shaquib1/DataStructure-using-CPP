
// Linkedlist is linear data structure and it is collection of nodes 
// a node is a combination of data and address of next node
// dynamic datastructure (grow / shrink at runtime) and no memory waste 
// no need of continuous storage
// types of LL->  1. singly LL
//                2. Doubly LL
//                3. Circular LL
//                4. Circular Doubly LL



// a node representation in code 

// class LinkedListNode{
//     public:
//       int data;
//       LinkedListNode *next;
// };

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

   // constructor
    Node(int data){
     this->data=data;
     this->next=NULL;
    }
};



int main(){

  //in this we create dynamically allocation object
    
  Node *node1 = new Node(12);
  
  cout<<node1->data<<endl;
  cout<<node1->next<<endl;

    return 0;
}