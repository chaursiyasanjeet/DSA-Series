#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack is ovreflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            cout << "element is pop out:" << arr[top] << endl;
            top--;
        }
        else
        {
            cout << "stack is empty" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
};

using namespace std;
int main()
{
    // creation of stack

    //     stack<int> s;
    //     s.push(2);
    //     s.push(3);
    //     s.pop();
    //     cout << s.top() << endl;

    //     if (s.empty())
    //     {
    //         cout << "stack is empty" << endl;
    //     }
    //     else
    //     {
    //         cout << "stack is not empty" << endl;
    //     }
    //     cout << "size of stack(s)->" << s.size() << endl;

    Stack s(5);
    s.push(5);
    s.push(8);
    s.push(5);
    s.push(8);
    s.push(5);

    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
}