// quicksort
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);

    // left anf right part sort karte hai
    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j++;
        }

        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    // left part sort
    quickSort(arr, s, p - 1);

    // right part sort
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[8] = {3, 5, 7, 3, 8, 2, 7, 2};
    int n = 8;

    quickSort(arr, 0, n - 1);

    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}