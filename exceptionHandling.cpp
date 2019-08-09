#include<iostream>

using namespace std;
bool flag1=0,flag2=0;
int main()
{
    try
    {
        double a,b;
        cout<<"enter the first number"<<endl;
        cin>>a;
        cout<<"enter second number"<<endl;
        cin>>b;

        if (b==0)
        {
            flag1=1;
            throw 0;//if condition becomes true compiler jumpus from throw to catch.. flag1 changes to 1 flag 2 remains 0
            flag2=1;
        }

        cout<<a/b;
    }
    catch (int x)
    {
        cout<<"MATH ERROR!!"<<endl<<"flag1="<<flag1<<" flag2="<<flag2<<endl;
    }
    /*catch(...)//DEFAULT syntax...is of no use here but can be used in other programs
    {
        cout<<"SYNTAX ERROR!!"<<endl;
    }*/

}

