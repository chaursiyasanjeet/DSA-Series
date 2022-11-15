#include <iostream>
#include <vector>
using namespace std;
void permutation(vector<int> input, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= input.size())
    {
        ans.push_back(input);
        return;
    }

    for (int i = index; i < input.size(); i++)
    {
        swap(input[index], input[i]);
        permutation(input, index + 1, ans);
        // bacltracking
        swap(input[index], input[i]);
    }
}
int main()
{
    vector<int> input;
    int n;
    cout << "Enter the vector size" << endl;
    cin >> n;
    cout << "Enter the number in vector" << endl;
    for (int i = 0; i <= n; i++)
    {
        cin >> i;
        input.push_back(i);
    }

    int index = 0;

    vector<vector<int>> ans;
    permutation(input, index, ans);

    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j;
        }
        cout << endl;
    }
}
