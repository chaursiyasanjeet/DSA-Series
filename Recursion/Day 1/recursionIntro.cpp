// RECURSION
#include <iostream>
using namespace std;

// first recursion code
int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    int chhoti = factorial(n - 1);
    int bada = n * chhoti;

    return bada;
}

// 2nd recursion code
int power(int n)
{
    // base
    if (n == 0)
        return 1;

    // resursive relation
    return 2 * power(n - 1);
}

// 3rd recursion code
void counting(int n)
{
    // base case
    if (n == 0)
        return;

    cout << n << endl;

    counting(n - 1);
}
int main()
{
    //->Function call itself
    // finding factorial;

    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;

    int power2 = power(n);
    cout << power2 << endl;

    counting(n);
}
