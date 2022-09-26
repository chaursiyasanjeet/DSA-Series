#include <iostream>
using namespace std;

void removeOccurenc(string &s, string &part)
{
    // inbuilt function for string
    // s.find(part) < s.length()->part ka indes kaun hai aur index ke length se kam to hai
    while (s.length() != 0 && s.find(part) < s.length())
    {
        // inbuilt function
        s.erase(s.find(part), part.length());
    }
}
int main()
{

    string s = "asdbbsbsbsbssjeribs";

    // remove this part from above string
    string remove = "bs";
    removeOccurenc(s, remove);
    cout << s << endl;
}