#include <iostream>
using namespace std;
// making functon for printing array
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// making funtion for swapalternate array
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i + 1 < size; i += 2)
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]); // swappimg array
        }
}
int main()
{
    int even[8] = {2, 3, 5, 2, 7, 9, 4, 8};
    int odd[8] = {3, 67, 3, 577, 3, 77, 2, 7};

    // swapping array alternate
    swapAlternate(even, 8);
    swapAlternate(odd, 8);

    // function calling for ptinting after swapping array
    printarray(even, 8);
    printarray(odd, 8);
}
/*without swapping function
temp=arr[i];
arr[i+1]=arr[i];
arr[i]=temp;*/
