// replace space with @40
// HomeWork do without variable
#include <iostream>
using namespace std;
string replaceSpaces(string &s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    // after changing copying the temp into string
    s = temp;
}

int main()
{
    string s = "My name is sanjeet";
    replaceSpaces(s);
    cout << s << endl;
}