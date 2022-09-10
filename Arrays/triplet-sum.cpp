#include <iostream>
using namespace std;
int triplet_sum(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i = i + 1)
    {
        int j = 0;
        for (j = i + 1; j < size; j = j + 1)
        {
            int k = 0;
            for (k = i + 2; k < size; k = k + 1)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << "The triplet is" << endl;
                    cout << arr[i] << arr[j] << arr[k] << endl;
                }
            }
        }
    }
}
int main()
{
    int arr[8] = {1, 3, 6, 3, 8, 8, 9, 4};
    int sum = 10;
    triplet_sum(arr, 8, 10);
}