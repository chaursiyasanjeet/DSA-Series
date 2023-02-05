#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(34);
    d.push_back(67);
    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    cout << d.front() << endl;
    cout << d.back() << endl;

    // d.pop_back();
    // cout << d.front() << endl;
    // cout << d.back() << endl;

    if (d.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
}