#include <iostream>
using namespace std;
int maxmDistance(int arr, int size, int cow)
{
    int start = 0;
    int maxi = -1;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid =
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 6};
    int n;
    cout << "Enter the no. of cow " << endl;
    cin >> n;
}