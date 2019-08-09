#include<iostream>
#include<string>
using namespace std;

class Area
{
public:
    Area(string x,int y,int z)
    {
        setData(x,y,z);
        area=0;

    }
    void setData(string n, int l, int b)
    {
        name=n;
        length=l;
        breadth=b;
    }
    int calculateArea(int l,int b)
    {
        area=l*b;
        return area;
    }
    string getName()
    {
        return name;
    }
private:
    string name;
    int length,breadth,area;
};

int main()
{
    Area ob("NULL",0,0);
    int p,q;
    string s;
    cout<<"Enter the shape >>>";
    cin>>s;
    cout<<"length of shape = ";
    cin>>p;
    cout<<"breadth of shape = ";
    cin>>q;
    ob.setData(s,p,q);
    cout << ob.getName();
    cout << " has area = "<< ob.calculateArea(p,q)<<endl;
    return 0;
}
