// binary search in 2D array and the elements is row wise sorted
#include <iostream>
using namespace std;

int binarySearch(int arr[][4], int m, int target)
{

    int start = 0;
    int end = m * 3 - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        // mid/col gives row no. and mid%col gives column no.
        int element = arr[mid / 4][mid % 4];
        if (element == target)
        {
            return 1;
        }
        if (element > target)
        {
            end = mid - 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return 0;
}

int main()
{

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int found = binarySearch(arr, 4, 9);
    cout << found << endl;
}