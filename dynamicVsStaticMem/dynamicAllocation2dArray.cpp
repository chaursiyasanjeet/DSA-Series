#include <iostream>
using namespace std;
int main()
{
    // Dynamic allocaion in 2D Array
    int row;
    cin >> row;
    int **arr = new int *[row];

    int col;
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // creation done from above steps

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // heap ko clean bhi karna hai
    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}