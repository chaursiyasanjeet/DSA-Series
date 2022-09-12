#include <iostream>
using namespace std;

int peakindex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1]) // agar mid se age wala elment se mid wala chhota ho to start ko mid+1 kr do
        {
            start = mid + 1;
        }
        else
        {
            end = mid; // agr end=mid-1 hua to peak element se peeche ja skta hai phir galat answer aa jayega. isiliye end=mid karna hoga ki koi bhi element miss na ho.
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    cout << "The peak element is at index " << peakindex(arr, 10) << endl;
}
