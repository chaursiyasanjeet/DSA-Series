// find pivot element in an sorted and rotated array.
#include <iostream>
using namespace std;
int findpivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int arr[5] = {3, 5, 7, 1, 3};
    cout << "pivot element is at index " << findpivot(arr, 5) << endl;
}