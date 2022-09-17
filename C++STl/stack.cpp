#include <iostream>

// including library
#include <stack>
using namespace std;
int main()
{

    stack<string> s;

    s.push("Sanjeet");
    s.push("Kumar");
    s.push("Chaurasiya");

    cout << "Top element->" << s.top() << endl;

    // last in first out
    s.pop();
    cout << "after removing Top element->" << s.top() << endl;

    cout << "Size of stack->" << s.size() << endl;
    cout << "Empty or not->" << s.empty() << endl;
}
