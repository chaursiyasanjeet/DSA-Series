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

void print(Node *tail)
{
    Node *temp = tail;
    // while (tail->next != temp)
    // {
    //     cout << tail->data << " ";
    //     tail = tail->next;
    // }
    // cout << tail->data << " ";
    // cout << endl;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

// inserting new node
void insertNode(Node *&tail, int element, int data)
{
    // assuming that the element is present in the list

    if (tail == NULL)
    {
        // empty list
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        // non empty list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found->curr is above that element
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// deleting node
void deleteNode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty, Please check again" << endl;
    }
    else
    {
        // value is present
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 node linked list
        if (curr == prev)
        {
            tail = NULL;
        }

        // 2 node link list
        if (tail == curr)
            tail = prev;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 35, 445);
    print(tail);
    insertNode(tail, 445, 44);
    print(tail);
    insertNode(tail, 44, 2);
    print(tail);
    insertNode(tail, 445, 9);
    print(tail);
    insertNode(tail, 44, 89);
    print(tail);

    deleteNode(tail, 2);
    print(tail);
}