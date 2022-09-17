#include <iostream>
using namespace std;
void insertionSort(int arr[], int size)
{
    // for round 1 to size-1
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
        }
        // copy temp value
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[6] = {2, 13, 6, 22, 4, 5};
    insertionSort(arr, 6);

    for (int k = 0; k < 6; k++)
    {
        cout << arr[k] << " ";
    }
}