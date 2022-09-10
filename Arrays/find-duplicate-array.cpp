// link-https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
#include <iostream>
using namespace std;
// find duplicate element in an array.

int findduplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    };

    for (int i = 1; i < size; i++) // this will double the each number but duplicare no. will be three times so after xor that no. will be displayed.
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 3, 4};

    int unique = findduplicate(arr, 5);
    cout << "unique element is " << unique << endl;
}