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

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node *&head, Node* &tail)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle or last node
        int count = 1;
        Node *prev = NULL;
        Node *curr = head;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if(curr->next == NULL) {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtHead(head, 16);
    print(head);
    insertAtHead(head, 30);
    print(head);

    insertAtTail(tail, 20);
    print(head);
    insertAtTail(tail, 40);
    print(head);

    insertAtPosition(head, tail, 3, 11);
    print(head);
    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    deleteNode(1, head, tail);
    print(head);

    deleteNode(5, head, tail);
    print(head);
    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    return 0;
}