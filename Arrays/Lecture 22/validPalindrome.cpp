// alpha aur numeric ko chhod ko baki charcter ko hatana hai
// uppercase ko lowercase me karna hai
// aur phir palindrome check karna hai

#include <iostream>
using namespace std;

// checking character is valid or not
bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
        return 0;
}

// lowercase maker
char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// checking palindrome
bool checkPalindrome(string a)
{
    int start = 0;
    int end = a.length() - 1;
    while (start < end)
    {
        if ((a[start]) != (a[end])) // agr equal nhi hai to return 0 kr do
            return 0;

        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

// valid palindrome or not
bool isPlaindrome(string s)
{

    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    // lowercase me karna hai
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }
    return checkPalindrome(temp);
}
int main()
{
    string s;
    s = {1, 's', 'A', '@', 4, 'A', 's'};
    cout << "Valid or not->" << isPlaindrome(s) << endl;
}
