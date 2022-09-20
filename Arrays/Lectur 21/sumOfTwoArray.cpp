#include <iostream>>
#include <vector>
using namespace std;

// reverisng after adding both array
vector<int> reverse(vector<int> v)
{

    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

// adding array function
vector<int> sumofArray(vector<int> &a1, vector<int> &a2)
{
    int i = a1.size() - 1;
    int j = a2.size() - 1;
    vector<int> ans;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int value1 = a1[i];
        int value2 = a2[j];

        int sum = value1 + value2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case when a1 is greater
    while (i >= 0)
    {
        int sum = a1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case when a2 is greater
    while (j >= 0)
    {
        int sum = a2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // Third case when carry is left
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}

int main()
{
    vector<int> a1;
    vector<int> a2;
    a1 = {2, 4, 5, 7, 8, 9};
    a2 = {3, 8, 9, 1, 7, 8, 8};
    vector<int> b = sumofArray(a1, a2);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
}