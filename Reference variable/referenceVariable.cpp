#include <iostream>
using namespace std;

// it will pass the reference of m
void update1(int &k)
{
    k++;
}

// it will pass the value
void update(int n)
{
    n++;
}
int main()
{

    int i = 5;
    int &j = i; // reference variable

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    cout << endl;
    int n = 5;
    cout << "Before update without reference:" << n << endl;
    update(n);
    cout << "After update without reference:" << n << endl;

    cout << endl;
    cout << "updating with reference" << endl;
    cout << "Before update with reference:" << n << endl;
    update1(n);
    cout << "After update with reference:" << n << endl;
}