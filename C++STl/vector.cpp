#include <iostream>

// including vector Library
#include <vector>

using namespace std;
int main()
{

    // creating vector
    vector<int> v;

    vector<int> a(5, 1); // in a(size of vector,intializing element)
    cout << "Print a" << endl;
    // printing vector
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // copying vector
    vector<int> last(a);
    cout << "Copied vector";
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // printing array size or capacity
    cout << "capacity->" << v.capacity() << endl;

    // pushing element in vector (if there is no space then vector automatically double its space and the previous vector will be dead)
    v.push_back(1);
    // capcaity of storing element in vector
    cout << "capacity->" << v.capacity() << endl;
    v.push_back(2);
    cout << "capacty->" << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity->" << v.capacity() << endl;

    // currently elemnt stored in vector
    cout << "size->" << v.size() << endl;

    // finding element at specific index
    cout << "Element at 2nd Index" << v.at(2) << endl;

    // finding first and last element of vector
    cout << "first element" << v.front() << endl;
    cout << "Last elemnt" << v.back() << endl;

    // pop_back ->remove last elemet from vector
    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // clearing vector
    cout << "Before clear vector size " << v.size() << endl;
    v.clear();
    cout << "After clear vector size " << v.size() << endl;
}