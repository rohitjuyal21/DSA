#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor;
    ~Node() {
        int value = this->data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << value << endl;
    }

};

// traversing Linked List
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

// lenght of Linked List
int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

// insert at head
void insertAtHead(Node *&head, Node *&tail, int d)
{
    // if head is empty
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // insert at end
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    // insert at a position
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head) {
    // deleting start node
    if(position == 1) {
        Node * temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(head, tail, 11);
    print(head);

    insertAtHead(head, tail, 13);
    print(head);

    insertAtHead(head, tail, 15);
    print(head);

    insertAtTail(tail, head, 20);
    print(head);

    insertAtTail(tail, head, 35);
    print(head);

    insertAtPosition(head, tail, 6, 100);
    print(head);

    insertAtPosition(head, tail, 3, 1);
    print(head);

    insertAtPosition(head, tail, 2, 2);
    print(head);

    delete(1, head);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    return 0;
}