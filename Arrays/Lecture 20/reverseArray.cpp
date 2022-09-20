#include <iostream>
#include <vector>
using namespace std;

// making rverse function
vector<int>
reverse(vector<int> v)
{
    int start = 0, end = v.size() - 1;

    while (start <= end)
    {
        swap(v[start], v[end]); // swapping array
        start++;
        end--;
    }
    return v;
}

// making printing function
void print(vector<int> v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v;

    v.push_back(11);
    v.push_back(23);
    v.push_back(5);
    v.push_back(8);
    v.push_back(1);

    vector<int> ans = reverse(v);

    cout << "Printing reversed array" << endl;
    print(ans);
}