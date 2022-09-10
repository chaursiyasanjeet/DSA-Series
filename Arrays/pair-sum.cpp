#include <iostream>
using namespace std;
void pair_sum(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++) // taking first element of an array.
    {
        for (int j = i + 1; j < size; j++) // now taking 2nd element of array.
        {
            if (arr[i] + arr[j] == sum) // comparing with sum.
            {
                cout << arr[i] << arr[j] << endl; // if found then printing the array element.
            }
        }
    }
}

int main()
{
    int arr[7] = {3, 46, 7, 3, 5, 2, 6};
    int sum = 8;
    pair_sum(arr, 7, 8);
    return 0;
}