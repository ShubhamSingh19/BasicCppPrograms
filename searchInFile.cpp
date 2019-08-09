#include<iostream>
#include<fstream>

using namespace std;

int flag,i,j;
string name,batch;
int roll;

template<class T>
void fun(T x, T y)
{
    if(x==y)
    {
        flag=1;
        cout<<"\n"<<name<<"\t\t"<<roll<<"\t"<<batch<<endl;
    }
}

int main()
{
    ifstream fileObject("info.txt");
    string p1,m1;
    int num,x1,y1;
    if(fileObject.is_open())
    {
        do
        {
            ifstream fileObject("info.txt");
            flag=0;
            cout<<"Press 1 to search by name!\nPress 2 to search by Eroll no.!\nPress 3 to search by batch!\nPress 4 to quit!!"<<endl;
            cin>>num;
            switch(num)
            {
                case 1:cout<<"\nenter the name to search"<<endl;
                       cin>>p1;

                       while(fileObject>>name>>roll>>batch)
                       {
                           fun(name,p1);
                       }
                       break;

                case 2:cout<<"\nenter the Eroll no. to search"<<endl;
                       cin>>x1;
                       while(fileObject>>name>>roll>>batch)
                       {
                           fun(roll,x1);
                       }
                       break;

                case 3:cout<<"\nenter the batch to search and change"<<endl;
                       cin>>m1;
                       while(fileObject>>name>>roll>>batch)
                       {
                           fun(batch,m1);
                       }
                       break;

                 case 4:fileObject.close();
                        goto last;

                default:goto last2;
            }
            if(flag==1)
            {
                cout<<"\nMATCH FOUND!!\n"<<endl;
            }
            else
            {
                cout<<"\nNo match found!!\n"<<endl;
            }
            goto skip;

            last2:cout<<"\nWRONG CHOICE!!\n"<<endl;

            skip:true;

        }while(1);
    }
    else
    {
        cout<<"file not assosiated with object"<<endl;
    }
    last:cout<<"\nprogram ends!!\n"<<endl;
}

