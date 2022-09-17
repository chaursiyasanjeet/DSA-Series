#include <iostream>

// including library
#include <set>
// it stores only unique element

using namespace std;
int main()
{

    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(1);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++; // delete specific element

    s.erase(it); // delete from last
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    // checking element is present or not
    cout << "5 is present or not->" << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5); // after this the greater will be counted
    for (auto it = itr; it != s.end(); it++)
    {

        cout << *it << " ";
    }
    cout << endl;
}
