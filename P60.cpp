#include <iostream>

using namespace std;

class Hero
{
    // properties
private:
    int health;

public:
    char level;

    Hero()
    {
        cout << "constructor called" << endl;
    }
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }
    void print()
    {
        cout << level << endl;
    }

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
    void setLevel(char l)
    {
        level = l;
    }
};

int main()
{
    Hero ramesh;

    // static allocation
    Hero a;

    // dynamical allocation using class with pointer
    Hero *h1 = new Hero();

    // cout << "size of h1 is : " << sizeof(h1) << endl;

    // Access Class
    h1->level = 'A';
    cout << "Level is : " << h1->level << endl;

    // Using Setter
    h1->setHealth(100);
    cout << "Health is : " << h1->getHealth() << endl;

    return 0;
}
