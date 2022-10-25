#include <iostream>
using namespace std;
void reverse(string &str, int start, int end)
{
    if (start > end)
        return;

    swap(str[start], str[end]);
    start++;
    end--;

    // recursive call
    reverse(str, start, end);
}
int main()
{
    string name = "sanjeet";
    reverse(name, 0, name.length() - 1);
    cout << name;
}