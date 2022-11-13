// power subset no. of element in power subset is (2^3)
#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(arr, output, index + 1, ans);

    // include
    int element = arr[index];
    output.push_back(element);
    solve(arr, output, index + 1, ans);
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans; // for storing the subset
    vector<int> output;
    int index = 0;
    solve(arr, output, index, ans);

    // printing 2d vector
    for (auto row : ans)
    {
        for (auto column : row)
        {
            cout << column << " ";
        }
        cout << endl;
    }

    // printing 2d vector using loop
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans.at(i).size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
