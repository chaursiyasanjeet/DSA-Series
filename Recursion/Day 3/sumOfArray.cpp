#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    int ans = 0;
    if (size == 0)
        return 0;
    if (size == 1)
    {
        return arr[0];
    }
    int remainingPart = sum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Sum of all elements of array is:" << sum(arr, 10) << endl;
}