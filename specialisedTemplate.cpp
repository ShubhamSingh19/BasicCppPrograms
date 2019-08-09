#include<iostream>
#include<string>

using namespace std;

template<class T>
class Handle
{
    T a,b;
public:
    Handle(T x,T y)
    {
        a=x;
        b=y;
        cout<<"sum = "<<a+b<<endl;
    }
};

template<>
class Handle<string>
{
    string a,b;
public:
    Handle(string x, string y)
    {
        a=x;
        b=y;
        cout<<a<<b<<endl;
    }
};

int main()
{
    double j,k;
    string c,d;
    cout<<"enter the numbers"<<endl;
    cin>>j>>k;
    cout<<"enter the words"<<endl;
    cin>>c>>d;


    Handle<double> ob1(j,k);
    Handle<string> ob2(c,d);

}


