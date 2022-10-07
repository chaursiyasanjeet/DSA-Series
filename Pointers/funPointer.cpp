#include <iostream>
using namespace std;
void print(int *p)
{
    cout << "address:" << p << endl;
    cout << "value:" << *p << endl;
}
void update(int *p)
{
    p = p + 1;
    cout << "inside function" << p << endl;
}
void updateValue(int *p)
{
    *p = *p + 1;
}

int getSum(int arr[], int n)
{
    // here array pointer address is coming in functionhkj
    cout << "size of array inside:" << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    int value = 5;
    int *p = &value;
    print(p);
    cout << "before updating" << p << endl;
    update(p);
    cout << "after updating " << p << endl;

    cout << "updating value" << endl;
    cout << "before updating:" << *p << endl;
    updateValue(p);
    cout << "after updating:" << *p << endl;

    int arr[7] = {1, 2, 3, 4, 5, 2, 34};
    cout << "Sum is:" << getSum(arr + 3, 4) << endl;
}
