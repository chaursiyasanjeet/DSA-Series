// find common element between two array,if intersection i snot present then return -1.
// link-https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
#include <iostream>
using namespace std;
int common(int arr1[], int size1, int arr2[], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < size2; j++)
        {
            if (element == arr2[j]) // comparing element
            {
                cout << element << endl;
                arr2[j] = -3; // inserting a garbage value so that it would'nt be compare again.
                break;
            }
        }
    }
}

int main()
{
    int arr1[6] = {1, 2, 2, 3, 5, 6};
    int arr2[6] = {98, 56, 2, 2, 3, 5};
    int ans = common(arr1, 6, arr2, 6);
}
