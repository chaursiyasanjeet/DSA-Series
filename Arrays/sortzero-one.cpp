#include <iostream>
using namespace std;
// Printig array after sorting
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int sortzero_one(int arr[], int size)
{
    int left = 0, right = size - 1;
    while (left < right) // jab tak left right se chhota ho
    {
        while (arr[left] == 0 && left < right) // agr left me zero hai to swap nhi krna hai usko age badha do
        {
            left++;
        }
        while (arr[right] == 1 && left < right) // agr right me one hai to swap nhi krna hai usko age badha do
        {
            right--;
        }

        // aga yaha pahuch gye ho iska mtlb
        // arr[right]==1 and arr[right]==0
        swap(arr[left], arr[right]);
        left++;
        right--;
        // swap krne ke bad left ko age aur right ko peeche kar do.
    }
}
int main()
{
    int arr[10] = {0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    sortzero_one(arr, 10);
    printarray(arr, 10);
}