#include <iostream>
using namespace std;
bool palindrome(string str, int start, int end)
{
    if (start > end)
        return true;

    if (str[start] != str[end])
        return false;
    else
    {
        return palindrome(str, start + 1, end - 1);
    }
}
int main()
{

    string name = "abccba";
    bool check = palindrome(name, 0, name.length() - 1);
    if (check)
    {
        cout << "It is a palindrome" << endl;
    }
    else
    {
        cout << "It is not a palindrome" << endl;
    }
}