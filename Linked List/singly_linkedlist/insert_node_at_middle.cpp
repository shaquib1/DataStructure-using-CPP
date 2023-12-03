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

void insertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{

    if (head == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node *&head, int position, int d)
{

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // create a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

int main()
{

    // created a new node
    Node *node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 12);

    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, 3, 22);
    print(head);

    insertAtPosition(head, 2, 65);
    print(head);

    return 0;
}