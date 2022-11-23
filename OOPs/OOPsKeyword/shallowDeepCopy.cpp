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
};

int main()
{
    Hero hero1;
    hero1.setHealth(45);
    hero1.setLevel('B');
    char name[9] = "Sanjeet";
    hero1.setName(name);

    // hero1.print();

    // use default copy constructor->shallow copy
    Hero hero2(hero1);
    // Hero hero2 = hero1;
    // hero2.print();

    hero1.name[0] = 'm';
    hero1.print();
    hero2.print();
    hero1 = hero2;

    hero1.print();
    hero2.print();
}