#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    char *name;
    static int timeToComplete;

    // default constructor
    Hero()
    {
        cout << "Constructor called" << endl;
        name = new char[100];
    }

    // parameterised constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // copy constructor
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
        cout << endl;
        cout << "name: " << this->name << ", ";
        cout << "health: " << this->health << ", ";
        cout << "level: " << this->level << endl;
        cout << endl;
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    int getLevel()
    {
        return level;
    }

    void setLevel(int l)
    {
        level = l;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random () {
        return timeToComplete ;
    }

    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero a;
    // cout << a.timeToComplete << endl; // not recommended

    // Hero b;
    // b.timeToComplete = 10; // not recommended
    // cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;

    // Hero h1;

    // Hero *h2 = new Hero();
    // // manually destructor call
    // delete h2;

    // Hero hero1;
    // hero1.setHealth(90);
    // hero1.setLevel('D');
    // char name[6] = "Magic";
    // hero1.setName(name);

    // // hero1.print();

    // Hero hero2(hero1);
    // // hero2.print();

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;

    // hero1.print();

    // hero2.print();

    // Hero S(20, 'B');
    // S.print();

    // Hero R(S);
    // R.print();

    // statically
    // Hero ben(10, 'A');
    // cout << ben.getHealth() << endl;
    // cout << ben.getLevel() << endl;

    // // dynamically

    // Hero *h = new Hero(40, 'B');
    // cout << h->getHealth() << endl;
    // cout << h->getLevel() << endl;

    // creation of object
    // Hero rock;

    // cout << endl;

    // Hero *b = new Hero();

    // b->setHealth(30);

    // cout << endl;
    // cout << (*b).getHealth() << endl;
    // cout << b->getHealth();
}