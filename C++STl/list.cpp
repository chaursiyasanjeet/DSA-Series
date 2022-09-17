#include <iostream>

// including library
#include <list>

using namespace std;

int main()
{

    list<int> l;

    list<int> n(5, 100);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    // pushing element into list
    l.push_back(1);
    l.push_front(2);

    // same pop_back and pop_front

    // printing list element
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "After erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "size of list->" << l.size() << endl;
}