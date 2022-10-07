#include <iostream>
using namespace std;

void spiralPrint(int arr[][4], int n)
{

    int row = n, col = 4;
    int count = 0;
    int total = row * col;

    // index intialize for printing
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {

        // print starting row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            cout << arr[startingRow][index] << " ";
            count++;
        }
        startingRow++;

        // print ending col
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            cout << arr[index][endingCol] << " ";
            count++;
        }
        endingCol--;

        // print ending row
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            cout << arr[endingRow][index] << " ";
            count++;
        }
        endingRow--;

        // print starting col
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            cout << arr[index][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}
int main()
{

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    spiralPrint(arr, 3);
}