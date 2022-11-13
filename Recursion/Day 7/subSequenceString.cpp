// find ubsequence string
#include <iostream>
#include <vector>
using namespace std;
void solve(string str, string output, int index, vector<string> &ans)
{
    // base case
    if (index >= str.length())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
    char ch = str[index];
    output.push_back(ch);
    solve(str, output, index + 1, ans);
}
int main()
{
    string str = "abc";
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    for (auto row : ans)
    {
        cout << row << " ";
    }
}