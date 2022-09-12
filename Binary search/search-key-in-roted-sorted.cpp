// search keky in roated and sorted array
#include <iostream>
using namespace std;
int getpivot(int arr[], int size)
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

// yaha batana hoga ki binary search start kha se satrt karna hai aur khtm kaha karna hai.
int binarysearch(int arr[], int s, int e, int key)
{
    int start = s; // yaha binary search 0 index se nhi jana hai jaha se search karna hai i.e  element jis part me hoga refer 52 and 56 line.
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] = key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int search(int arr[], int size, int key)
{
    int pivot = getpivot(arr, size);
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        return binarysearch(arr, pivot, size - 1, key); // yaha dusre part me element key aa rha hai to binary search pivot element se satrt hoga aur size-1 index pe khtm hoga
    }
    else
    {
        return binarysearch(arr, 0, pivot - 1, key); // yaha element first part me aa rha hai to binary search 0 se start hoga pivot-1 index pe khtm hoga.
    }
}

int main()

{
    int arr[5] = {7, 9, 2, 3, 5};
    cout << "Find 3 at index " << search(arr, 5, 3) << endl;
}