#include<iostream>
#include<string>

using namespace std;

class Over
{
public:
    Over();
    Over(string,string);
    Over operator-(Over);
    string s1,s2;
};

Over::Over()
{}

Over::Over(string y,string z)
{
    s1=y;
    s2=z;
}

Over Over::operator-(Over ob)
{
    Over newob;
    newob.s1=s1+ob.s1;
    newob.s2=s2+ob.s2;
    return newob;
}

int main()
{
    string name1,name2,name3,name4;
    cout<<"Enter first string>>>";
    cin>>name1;
    cout<<"Enter second string>>>";
    cin>>name2;
    cout<<"Enter third string>>>";
    cin>>name3;
    cout<<"Enter 4th string>>>";
    cin>>name4;
    Over a(name1,name3);
    Over b(name2,name4);
    Over c;
    c=a-b;
    cout<<c.s1<<endl;
    cout<<c.s2<<endl;
    }

}
