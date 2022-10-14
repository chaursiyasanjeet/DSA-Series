#include <iostream>
using namespace std;

// default argument

// default start from 0 if start is not passed in argument.//always start from right most
void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 4, 3, 5, 3};

    print(arr, 5);
    cout << endl;
    print(arr, 5, 2);
}