#include <iostream>
#include <string.h>
using namespace std;
class Hero
{
    // Properties
private:
    int health;

public:
    char level;
    char *name;
    static int timeToComplete;

    Hero()
    {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    // making deep copy constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "[Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << "]" << endl;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }

    // static function
    static int random()
    {
        return timeToComplete;
    }
};

int Hero ::timeToComplete = 6;
int main()
{
    // static->destructor will be automatically called.
    Hero a;

    // dynamically->have to call destructro manuaally.
    Hero *b = new Hero();
    delete b;

    cout << Hero::timeToComplete << endl;
    cout << a.timeToComplete << endl;
    cout << Hero::random() << endl;
}