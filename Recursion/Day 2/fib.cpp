#include <iostream>
using namespace std;

int fib(int n)
{
    // base case
    if (n == 0)
        return 0;
    if (n == 1)
    {
        return 1;
    }

    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

/*
void reachHome(int src, int dest)
{
    cout << "source " << src << " destination " << dest << endl;
    if (src == dest)
    {
        cout << "pahuch gaya" << endl;
        return;
    }

    src++;
    reachHome(src, dest);
}
*/

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
}