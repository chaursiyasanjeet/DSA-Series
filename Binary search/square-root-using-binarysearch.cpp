// Find square root using binary search
#include <iostream>
using namespace std;
long long int squareRootInteger(int n)
{
    int start = 0;
    int end = n;
    long long int ans = -1;
    long long int mid = start + (end - start) / 2;
    while (start <= end)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double exactSoln(int n, int point, int tempSoln) // double float data type ke liye use hota hai
{
    double factor = 1;
    double ans = tempSoln;

    for (int i = 0; i < point; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int tempSoln = squareRootInteger(n);
    cout << "Square root is " << exactSoln(n, 3, tempSoln) << endl;
    return 0;
}
