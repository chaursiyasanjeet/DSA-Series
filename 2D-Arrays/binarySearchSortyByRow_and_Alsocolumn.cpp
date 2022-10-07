// binary search in 2D array where element sorted row wise and also column wise.

#include <iostream>
using namespace std;
int search(int arr[][4], int m, int target)
{
    int rowIndex = 0;
    int colIndex = 3;
    while (rowIndex < m && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex];

        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << search(arr, 3, 10) << endl;
}