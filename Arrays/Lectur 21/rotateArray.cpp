#include <iostream>
#include <vector>
using namespace std;

//& taking reference to vector
void rotate(vector<int> &n, int k)
{
    vector<int> temp(n.size());

    for (int i = 0; i < n.size(); i++)
    {
        temp[(i + k) % n.size()] = n[i];
    }
    n = temp;
}

int main()
{
    vector<int> n;
    // pushig vector
    n = {4, 5, 7, 2, 76, 8};
    rotate(n, 1);

    // printing vector
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
}