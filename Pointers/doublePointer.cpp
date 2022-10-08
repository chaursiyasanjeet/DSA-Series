#include <iostream>
using namespace std;

void update(int **p)
{
    // p = p + 1; // change nhi ho raha kuch
    //*p = *p + 1; // ptr ka address change hoga

    // upar wala dono ek sath  chalane pe pahla wala line i ka address le le rha hai isi liye i ka value change ho rha hai

    //  **p = **p + 1; // i ka value 1 se increase ho jayega
}

int main()
{
    int i = 2;
    int *ptr = &i;

    // Double pointer
    int **ptr2 = &ptr;

    /*
        // value of i
        cout << i << endl;
        cout << *ptr << endl;

        // same print address of i
        cout << &i << endl;
        cout << ptr << endl;
        cout << *ptr2 << endl;

        // pointer address
        cout << &ptr << endl;
        cout << ptr2 << endl;
        */

    cout << endl;
    cout << "before " << i << endl;
    cout << "before " << ptr << endl;
    cout << "before " << ptr2 << endl;
    cout << endl;
    update(ptr2);
    cout << "after " << i << endl;
    cout << "after " << ptr << endl;
    cout << "after " << ptr2 << endl;
}