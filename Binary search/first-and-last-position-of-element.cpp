// First(left most) and last(right most) position of element in an sorted array.
#include <iostream>
using namespace std;
int firstoccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1; // key mil gaya to end ko mid ke left side shidt kr do
        }
        if (key > arr[mid]) // right side me jao
        {
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1; // left side me jao
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastoccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1; // agr key mil gaya to start ko  mid ke right side me kar do
        }
        if (key > arr[mid])
        {
            start = mid + 1; // right side me jao
        }
        if (key < arr[mid])
        {
            end = mid - 1; // left side me jao
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 3};
    cout << "First occurence in the array is at index " << firstoccurence(arr, 5, 3) << endl;
    cout << "Last occurence in the array is at index " << lastoccurence(arr, 5, 3) << endl;
}
