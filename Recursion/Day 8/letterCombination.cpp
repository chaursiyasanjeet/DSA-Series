// letter combination of a phone number
#include <iostream>
#include <vector>
using namespace std;
void solve(string digit, string output, int index, string mapping[], vector<string> &ans)
{
    // base case
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, mapping, ans);
        output.pop_back();
    }
}
int main()
{
    cout << "Enter the number" << endl;
    string digit;
    cin >> digit;
    vector<string> ans;
    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqr", "stuv", "wxyz"};
    solve(digit, output, index, mapping, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    // printing auto
    for (auto i : ans)
    {
        cout << i << " ";
    }
}