#include <iostream>
#include <vector>
using namespace std;
void merge(int arr1[], int k, int arr2[], int l, int arr3[])
{
    int i = 0, j = 0;
    int m = 0;
    while (i < k && j < l) // jb tk dono me se element mile tb tk loop chalan hai
    {
        if (arr1[i] < arr2[j]) // agr arr1 chhota ho to arr1 ka element dalna hai
        {
            arr3[m] = arr1[i];
            m++;
            i++;
        }

        else if (arr1[i] > arr2[j]) // agr arr2 ka element chhota ho to arr2 ka element dalna hai
        {
            arr3[m] = arr2[j];
            m++;
            j++;
        }
    }
    // agr koi ek bad hua dusre se to phir bach jayega to usko copy kra do
    // copy kr do first element ko
    while (i < k)
    {
        arr3[m++] = arr1[i++];
    }

    // copy kr do second element ko
    while (j < l)
    {
        arr3[m++] = arr2[j++];
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[sizeof(arr1) + sizeof(arr2)] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
}