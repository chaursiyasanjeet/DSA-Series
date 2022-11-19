#include <iostream>
#include "hero.cpp"
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
    hero h1;
    cout << "Size of h1: " << sizeof(h1) << endl;

    // dynamically
    Hero *b = new Hero;
    cout << "Ramesh Health is: " << (*b).getHealth() << endl;
    cout << "Ramesh Level  is: " << (*b).level << endl;

    cout << "Ramesh Health is: " << b->getHealth() << endl;
    cout << "Ramesh Level  is: " << b->level << endl;

    Hero Ramesh;
    Ramesh.setHealth(45);
    Ramesh.level = 'A';
    cout << "Ramesh Health is: " << Ramesh.getHealth() << endl;
    cout << "Ramesh Level  is: " << Ramesh.level << endl;
}