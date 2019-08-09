#include<iostream>

using namespace std;

class Mother
{
public:
    Mother();
private:
    int a;
friend void fun(Mother &ob);
};
Mother::Mother()
{
  int a=0;
}

void fun(Mother &ob)
{
    ob.a=12;
    cout<<ob.a<<endl;
}
int main()
{
    Mother newob;
    fun(newob);
}
