// print first column form top to bottom then second bottom to top like this
#include <iostream>
using namespace std;
void printLikeWave(int arr[][4], int m)
{
    for (int col = 0; col < 4; col++)

        if (col & 1)
        {
            for (int row = m - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 0; row < m; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
}

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printLikeWave(arr, 3);
    cout << endl;
}