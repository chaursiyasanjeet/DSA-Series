#include <iostream>

// library
#include <map>
// sorted
// random in case of unorder map

using namespace std;
int main()
{
    map<int, string> m;
    m[2] = "second";
    m[1] = "first";
    m[4] = "Fourth";

    m.insert({5, "fifth"});

    cout << "Before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 14->" << m.count(13) << endl;

    m.erase(5);
    cout << "After erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(2); // take element reference and print including this and greater than this
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}