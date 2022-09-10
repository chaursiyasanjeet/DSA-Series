#include <iostream>
using namespace std;
int keyfound(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // finding mid of array
    // int mid = (start + end) / 2;
    // mid=(start+end)/2 This will not work if the array index is greater than 2^31 so we will use the below formula to avoid the problem
    int mid = start + (end - start) / 2; // now updating mid.

    while (start < end)
    {
        if (arr[mid] = key)
        {
            return mid; // if key is match to mid then return it
        }
        if (key > arr[mid]) // If key is not found then if key is greater than mid then go to right side.
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1; // If key is smaller than mid then go to left side.
        }
        // mid=(start+end)/2 This will not work if the array index is greater than 2^31 so we will use the below formula to avoid the problem
        mid = start + (end - start) / 2; // now updating mid.
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int index = keyfound(even, 6, 4);
    cout << "The index of the element in array is: " << index << endl;
}

// boolean type
/*#include <iostream>
using namespace std;
bool keyfound(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // finding mid of array
    // int mid = (start + end) / 2;
    // mid=(start+end)/2 This will not work if the array index is greater than 2^31 so we will use the below formula to avoid the problem
    int mid = start + (end - start) / 2; // now updating mid.

    while (start < end)
    {
        if (arr[mid] = key)
        {
            return 1; // if key is match to mid then return it
        }
        if (key > arr[mid]) // If key is not found then if key is greater than mid then go to right side.
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1; // If key is smaller than mid then go to left side.
        }
        // mid=(start+end)/2 This will not work if the array index is greater than 2^31 so we will use the below formula to avoid the problem
        mid = start + (end - start) / 2; // now updating mid.
    }
    return 0;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    bool found = keyfound(even, 6, 4);
    if (found)
    {
        cout << "the key is found" << endl;
    }
    else
    {
        cout << "The key is not found" << endl;
    }
}*/