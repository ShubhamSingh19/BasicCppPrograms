#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fileOb("info.txt");
    if(fileOb.is_open())
    {
        cout<<"enter the info of members"<<endl;
        cout<<"press Ctrl+Z to quit"<<endl;
        cout<<"Name"<<"\t\t"<<"ERoll no."<<"\t"<<"Batch"<<endl;

        string name,batch;
        int roll;
        while(cin>>name>>roll>>batch)
        {
            fileOb <<name<<"\t\t"<<roll<<"\t"<<batch<<endl;
        }
    }
    else
    {
        cout<<"File not assosiated with Object"<<endl;
    }
}
