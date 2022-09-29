#include <iostream>
using namespace std;

// toPrint Row wise sum
void sumOfRow(int arr[][4], int row, int col)
{
    cout << "Printig row wise sum" << endl;
    int first = 1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {

            sum += arr[i][j];
        }

        cout << "sum of " << first << "row-> " << sum << endl;
        first++;
    }
}

// Printing column wise
void sumOfColumn(int arr[][4], int row, int col)
{
    cout << "Printig column wise sum" << endl;
    int first = 1;
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {

            sum += arr[j][i];
        }

        cout << "sum of " << first << "column-> " << sum << endl;
        first++;
    }
}

// largest Row sum
void largestRowSum(int arr[][4], int row, int col)
{
    int max = 0;
    int rowIndex = -1;
    cout << "Largest row wise sum" << endl;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
            if (sum > max)
            {
                max = sum;
                rowIndex = i;
            }
        }
    }
    cout << "Maximum sum in index" << rowIndex << "is->" << max << endl;
}

int main()
{
    int arr[3][4];

    // taking input
    cout << "Give the array input" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    sumOfRow(arr, 3, 4);
    sumOfColumn(arr, 3, 4);
    largestRowSum(arr, 3, 4);
}