#include<iostream>

using namespace std;

class Enemy
{
protected:
    int attackpower;
public:
    virtual void attack()
    {
    }
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
    Enemy *enemy1=&n;//LINKING.MAKING n and enemy1 eqivalent,BUT BOTH ARE ACTUALLY DIFFERENT.THIS IS VALID AS NINJA IS DERIVED CLASS OF ENEMY
    Enemy *enemy2=&m;//LINKING.MAKING m and enemy2 equivalent,BUT BOTH ARE ACTUALLY DIFFERENT.THIS IS VALID AS MONSTER IS DERIVED CLASS OF ENEMY

    enemy1->setattackpower(25);
    enemy2->setattackpower(50);

    enemy1->attack();
    enemy2->attack();
    //HERE IN BOTH (ABOVE) SAME FUNCTION IS CALLED AND EVEN OBJECT BELONGS TO SAME CLASS BUT STILL OUTPUT ARE DIFFERENT
    //THIS IS CALLED POLYMORPHISM
}
