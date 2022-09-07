#include <iostream>
using namespace std;
int findunique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i]; // xor(^) operator will cancel duplicate element.
    }
    return ans;
}

int main()
{
    int arr[5] = {3, 5, 5, 7, 7};

    int ans = findunique(arr, 5);
    cout << "Unique number is: " << ans << endl;
}