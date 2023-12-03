// Insertion of node at head of linked list

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

// create a insert_node_at_head function which insert new node at head of the linked list
void insert_node_at_head(Node *&head, int data)
{   // here in function we take reference because we don't create a copy of linkedlist
    // all changes occur in orginal linkedlist
    // create new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
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
    //print(head);

    insert_node_at_head(head, 45);
    print(head);

    insert_node_at_head(head, 56);
    print(head);
}