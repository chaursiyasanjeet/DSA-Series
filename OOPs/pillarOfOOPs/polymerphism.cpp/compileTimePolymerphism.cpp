// Compile time Polymerphism
#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello sanjeet" << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello sanjeet" << endl;
    }

    int sayHello(string name, int n)
    {
        cout << "Hello sanjeet" << endl;
    }
};
int main()
{
    A obj;
    obj.sayHello();
}
