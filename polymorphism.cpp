#include<iostream>

using namespace std;

class Enemy
{
protected:
    int attackpower;
public:
    void setattackpower(int a)
    {
        attackpower=a;
    }
};

class Ninja:public Enemy
{
public:
    void attack()
    {
        cout<<" Ninja Chop!! Health= -"<<attackpower<<endl;
    }
};

class Monster:public Enemy
{
public:
    void attack()
    {
        cout<<" Monster Teeth!! Health= -"<<attackpower<<endl;
    }
};
int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1=&n;
    Enemy *enemy2=&m;

    enemy1->setattackpower(25);
    enemy2->setattackpower(50);

    n.attack();
    m.attack();
}
