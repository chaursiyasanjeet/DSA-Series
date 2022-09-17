#include <iostream>

// including library
#include <queue>
// first in first out

using namespace std;

int main()
{
    queue<string> q;
    q.push("Kumar");
    q.push("Sanjeet");
    q.push("Chaurasiya");

    cout << "Size of queue before pop->" << q.size() << endl;

    cout << "First Element" << q.front() << endl;
    q.pop();
    cout << "First element " << q.front() << endl;

    cout << "Size of queue after pop->" << q.size() << endl;
}
