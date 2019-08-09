#include<iostream>

using namespace std;

class Mother
{
public:
    Mother();
    ~Mother()
    {
        cout<<"MOTHER DESTRUCTOR"<<endl;
    }
    void say(int,int);
protected:
    int i;
};
Mother::Mother()
{
    int i=0;
    cout<<i<<endl;
}
void Mother::say(int x,int y)
{
    i=x+y;
    cout<<i<<endl;
}

class Daughter:public Mother
{
public:
    Daughter();
    ~Daughter()
    {
        cout<<"Daughter DISTRUCTOR"<<endl;
    }
};
Daughter::Daughter()
{
 i=7;
 cout<<i<<endl;
}
int main()
{
    Daughter ob;
    ob.say(2,3);
}
