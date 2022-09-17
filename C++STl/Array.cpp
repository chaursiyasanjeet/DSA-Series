#include <iostream>
#include <array> // including array library
using namespace std;
int main()
{
    cout << "hello" << endl;
    array<int, 4> a = {1, 2, 3, 4};

    // for finding size of array
    int size = a.size();
    for (int i = 0; i < size; i++) // printing array
    {
        cout << a[i] << endl;
    }

    // finding elment at specific index
    cout << "element at 2nd index->" << a.at(2) << endl;

    // checking empty array or not
    cout << "Empty or not ->" << a.empty() << endl;

    // finding first and last element of array
    cout << "First element -> " << a.front() << endl;
    cout << "Last element ->" << a.back() << endl;
}