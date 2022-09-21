#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// Finding legth of character arrays
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) // null is written like this '/0'.not in double colon
    {
        count++;
    }
    return count;
}

// reverse the charcter arrays
void reverse(char name[])
{
    int start = 0;
    int end = getLength(name) - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}

// check palindrome->after reversing character arrays same as without reversing
bool checkPalindrome(char name[])
{
    int start = 0;
    int end = getLength(name) - 1;
    while (start < end)
    {
        if (toLowerCase(name[start]) != toLowerCase(name[end])) // agr equal nhi hai to return 0 kr do
            return 0;

        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{
    // charcter arrays
    char name[20];
    cout << "Enter your name" << endl;

    // taking input in character arrays->execution will stop after space ,tab and new line.
    cin >> name;

    // printing character arrays
    cout << "Your name is " << name << endl;

    cout << "length->" << getLength(name) << endl;
    reverse(name);
    cout << "Your name is " << name << endl;

    // check Planidrome
    cout << "Palindrome or not ->" << checkPalindrome(name) << endl;

    // making upper case to lower case
    cout << "character is->" << toLowerCase('a') << endl;
    cout << "character is->" << toLowerCase('A') << endl;
}