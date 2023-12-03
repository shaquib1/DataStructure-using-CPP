
// insert node at tail in linked list

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

void insert_node_at_tail(Node *&tail, int d)
{
    // create new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// creare a print function which print likedlsit means traverse all linkedlist
void print(Node *&head)
{

    Node *temp = head; // here create new pointer

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    // creae a new node
    Node *node1 = new Node(33);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insert_node_at_tail(tail, 45);
    print(head);

    insert_node_at_tail(tail, 56);
    print(head);
}