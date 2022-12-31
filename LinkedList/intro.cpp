#include <iostream>
using namespace std;

// Linked list node
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

// inserting through head
void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert from tail
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

// insert at random place
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *toInsert = new Node(d);
    toInsert->next = temp->next;
    temp->next = toInsert;
}

// deleting linked list
void deleteNode(int position, Node *&head, Node *&tail)
{

    if (position == 1)
    {
        // deleting first or start node
        Node *temp = head;
        head = head->next;
        // memory free node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node and last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        // deleting
        if (curr->next == NULL)
            tail = prev;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// printing linkedlist
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

int main()
{
    // creating new node
    Node *node1 = new Node(58);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 134);
    print(head);
    insertAtHead(head, 13);
    print(head);

    insertAtTail(tail, 44);
    print(head);

    // 13,134,58,44
    insertAtPosition(head, tail, 3, 22);
    print(head);

    insertAtPosition(head, tail, 1, 4);
    print(head);
    cout << endl;

    deleteNode(6, head, tail);
    print(head);
    cout << "Head " << head->data << endl;
    cout << "tail " << tail->data << endl;
}