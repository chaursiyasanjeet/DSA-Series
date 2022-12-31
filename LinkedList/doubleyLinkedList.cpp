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

    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for data " << value << endl;
        }
};

// printing node
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// getting length of linkedlist
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *toinsert = new Node(data);
        toinsert->next = head;
        head->prev = toinsert;
        head = toinsert;
    }
}

void insertAtTail(Node *&tail, Node *&head, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *toInsert = new Node(data);
        tail->next = toInsert;
        toInsert->prev = tail;
        tail = toInsert;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // insert At Start
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }

    // creating a node
    Node *toInsert = new Node(data);

    toInsert->next = temp->next;
    temp->next->prev = toInsert;
    toInsert->prev = temp;
    temp->next = toInsert;
}
void deleteNode(int position, Node *&head, Node *&tail)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr->next == NULL)
            tail = prev;

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}
int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    cout << getLength(head) << endl;

    insertAtHead(head, tail, 23);
    insertAtHead(head, tail, 53);
    insertAtHead(head, tail, 2);
    print(head);

    insertAtTail(tail, head, 43);
    print(head);
    insertAtHead(head, tail, 56);
    print(head);

    insertAtPosition(head, tail, 2, 890);
    print(head);

    deleteNode(1, head, tail);
    print(head);
    cout << "Head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(6, head, tail);
    print(head);
    cout << "Head " << head->data << endl;
    cout << "tail " << tail->data << endl;
}