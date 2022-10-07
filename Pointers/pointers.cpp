#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;

    // address operator &
    cout << "Address of num:- " << &num << endl;

    int *pr = &num;
    cout << "value is:" << *pr << endl;
    cout << "address of num is:-" << pr << endl;

    // size
    cout << "Size of integer is:" << sizeof(num) << endl;
    cout << "size of pointer is:" << sizeof(pr) << endl;

    int i = 9;
    int *p = 0;
    p = &i;
    cout << "value of i is:" << *p << endl;
    cout << "address of i is:" << *p << endl;

    int num2 = 9;
    int *p2 = &num2;
    cout << "before" << num2 << endl;
    (*p2)++;
    cout << "After" << num2 << endl;

    // copying pointer
    int *q = p2;
    cout << *p2 << " and " << *q << endl;
}