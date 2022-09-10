// To find unique element in which other element have duplicate element in an array.
#include <iostream>
using namespace std; // link-https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
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