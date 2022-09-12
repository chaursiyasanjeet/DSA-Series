#include <iostream>
using namespace std;
int find_all_duplicates(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
    }
    for (int i = 0; i < size; i++)
    {

        arr[i] = int duplicate[] ^ arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[10] = {1, 3, 6, 3, 4, 4, 5, 7, 0, 8};
    cout << find_all_duplicates(arr, 10);
}