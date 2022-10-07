#include <iostream>
using namespace std;
int main()
{

    int arr[10] = {2, 3, 8, 5, 6};
    cout << "address of first memeory block is:" << arr << endl;
    cout << "address of first memeory block is:" << &arr[0] << endl;

    cout << "star operation:" << *(arr) << endl;
    cout << "Star:" << *arr + 1 << endl;
    cout << "Star 3:" << *(arr + 1) << endl;
    cout << "arr " << 2 [arr] << endl;

    int temp[10];
    cout << "size of array" << sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout << "Size of pointer:" << sizeof(ptr) << endl;

    int arra[10] = {3, 5, 194, 501, 4};
    cout << &arra[0] << endl;
    cout << &arra << endl;
    cout << arra << endl;

    int *p = &arra[0];
    cout << "STAR WALA" << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    int arr2[10];

    // arr2 = arr2 + 1;->error

    int *ptr2 = &arr2[10];
    cout << ptr2 << endl;
    ptr2 = ptr2 + 1;
    cout << ptr2 << endl;
}