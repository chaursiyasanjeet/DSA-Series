#include <iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    // base case
    if (start > end)
        return false;

    if (arr[mid] == target)
        return true;
    // recursive relation
    if (arr[mid] > target)
    {
        return binarySearch(arr, start, mid - 1, target);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, target);
    }
}
int main()
{
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 15, 17, 19};
    bool ans = binarySearch(arr, 0, 10, 8);
    if (ans)
    {
        cout << endl
             << endl
             << "Element is Present" << endl
             << endl
             << endl;
    }
    else
    {
        cout << endl
             << endl
             << "Element is Not present" << endl
             << endl
             << endl;
    }
}