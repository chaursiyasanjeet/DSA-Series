#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    // constructors
    Hero()
    {
        cout << "Constructor called" << endl;
    }

    // parametrised Constructor
    Hero(int health)
    {
        cout << "This->" << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // making own copy constructor
    Hero(Hero &temp)
    {
        this->level = temp.level;
        this->health = temp.health;
    }

    // getters and setters
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    // objected created statically
    cout << "Hi" << endl;
    Hero ramesh(10, 'B');
    cout << "Hello" << endl;

    // dynamically
    Hero *h = new Hero;
    cout << "Address of ramesh: " << &ramesh << endl;

    // copy constructor->default
    Hero s(ramesh);
    ramesh.print();
    s.print();
}