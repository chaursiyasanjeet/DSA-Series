// bubblesort using recursion
#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    sort(arr, n - 1);
}
int main()
{
    int arr[10] = {2, 4, 67, 2, 1, 78, 4, 72, 34, 21};
    sort(arr, 10);
    // printing array
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}