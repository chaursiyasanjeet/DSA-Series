#include <iostream>
using namespace std;
// Linear search using recursion
bool linearSearch(int arr[], int size, int target)
{
    if (size == 0)
    {
        return false;
    }
    else if (arr[0] == target)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, target);
        return remainingPart;
    }
}
int main()
{

    int arr[10] = {4, 5, 3, 6, 3, 5, 4, 6, 3, 65};
    cout << linearSearch(arr, 10, 5);
}