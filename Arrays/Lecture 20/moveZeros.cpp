#include <iostream>
using namespace std;
void moveZero(int arr[], int size)
{
    int nonZero = 0; // mtlb ki non zero array ke 0 index me dal jaye
    for (int i = 0; i < size; i++)
    {

        if (arr[i] != 0) // agr koi no zero element mile to usko nonZero index mtlb ki start me dal do
        {
            swap(arr[i], arr[nonZero]);
            nonZero++; // aur phir non zero ko badha do taki agla non zero pichle wale ke aage aye aur same order maintin rhe
        }
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
    int arr[6] = {0, 3, 0, 0, 2, 5};
    moveZero(arr, 6);
    print(arr, 6);
}