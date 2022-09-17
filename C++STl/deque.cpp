#include <iostream>

// deque library
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2); // pushinf element from front

    // printing

    // d.pop_front(); // removing element from starting
    // d.pop_back(); // removing last elemnt
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // printng specific index elemnt
    cout << "Print first index elemnt->" << d.at(1) << endl;

    // finding first and last element of vector
    cout << "first element" << d.front() << endl;
    cout << "Last elemnt" << d.back() << endl;

    // empty or not
    cout << "Empty or not->" << d.empty() << endl;

    // erasing element
    cout << "Befor erase->" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // from where you want to delete and how many element you want to delete
    cout << "After erase->" << d.size() << endl;
}