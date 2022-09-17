#include <iostream>
using namespace std;
int selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;                  // assuming frist element is minm
        for (int j = i + 1; j < size; j++) // uske bad i+1 index se compare karna hai
        {
            if (arr[j] < arr[minIndex]) // comparing with next element
                minIndex = j;           // ahr element minindex se chhot ahai to usko min dex me store kra lena
        }
        swap(arr[minIndex], arr[i]); // ab min index ko i index se swap lra do
    }
}

int main()
{
    int arr[5] = {2, 7, 5, 3, 4};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}