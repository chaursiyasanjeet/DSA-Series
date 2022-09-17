#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool swapped = false;

        // for round 1 to size-1.
        for (int j = 0; j < size - i; j++) // checking array elment and swappinng
        // j=size-1 beacuse in each round last elment will be sorted so j will be less in each round
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[6] = {2, 13, 6, 22, 4, 5};
    bubbleSort(arr, 6);

    for (int k = 0; k < 6; k++)
    {
        cout << arr[k] << " ";
    };
}