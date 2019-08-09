#include<iostream>
#include<fstream>

using namespace std;

int flag,i,j;
string name,batch;
int roll;

struct data
{
    string name1;
    string batch1;
    int roll1;
};
template<class T>
void fun(T z,T z1,T x,T y)
{
    if(z==x)
    {
        flag=1;
        z1=y;
    }
}


int main()
{
    ifstream fileObject("info.txt");
    string p1,q1,m1,n1;
    int num,x1,y1;
    if(fileObject.is_open())
    {
        do
        {
            ifstream fileObject("info.txt");
            flag=0;
            i=0;
            j=0;
            /*while(fileObject>>name>>roll>>batch)
            {
                ++i;
            }*/
            struct data a[3];
            cout<<"Press 1 to repace name!\nPress 2 to replace Eroll no.!\nPress 3 to repalce batch!\nPress 4 to quit!!"<<endl;
            cin>>num;
            switch(num)
            {
                case 1:cout<<"enter the name to search and change"<<endl;
                       cin>>p1;
                       cout<<"enter the name to replace with"<<endl;
                       cin>>q1;

                       while(fileObject>>name>>roll>>batch)
                       {
                           cout<<name<<roll<<batch<<endl;
                           if(p1==name)
                           {
                               a[j].name1=q1;
                               flag=1;
                           }
                           else
                           {
                               a[j].name1=name;
                           }
                           a[j].roll1=roll;
                           a[j].batch1=batch;

                           j++;
                       }
                       break;

                case 2:cout<<"enter the Eroll no. to search and change"<<endl;
                       cin>>x1;
                       cout<<"enter the Eroll no. to replace with"<<endl;
                       cin>>y1;
                       /*while(fileObject>>name>>roll>>batch)
                       {
                           a[j].name1=name;
                           fun(roll,a[j].roll1,x1,y1);
                           a[j].batch1=batch;

                           j++;
                       }
                       break;

                case 3:cout<<"enter the batch to search and change"<<endl;
                       cin>>m1;
                       cout<<"enter the batch to replace with"<<endl;
                       cin>>n1;
                       while(fileObject>>name>>roll>>batch)
                       {
                           a[j].name1=name;
                           a[j].roll1=roll;
                           fun(batch,a[j].batch1,m1,n1);

                           j++;
                       }
                       break;*/

                 case 4:fileObject.close();
                        goto last;

                default:goto last2;

            }

            ofstream fileOb("infonew.txt");
            for(j=0;j<=i;j++)
            {
                fileOb<<a[j].name1<<"\t\t"<<a[j].roll1<<"\t"<<a[j].batch1<<endl;
            }
            fileOb.close();

            if(flag==1)
            {
                cout<<"Replacing done!!"<<endl;
            }
            else if(flag==0)
            {
                cout<<"No match found!!"<<endl;
            }
            goto skip;

            last2:cout<<"WRONG CHOICE!!"<<endl;

            skip:true;

        }while(1);
    }
    else
    {
        cout<<"file not assosiated with object"<<endl;
    }
    last:cout<<"program ends!!"<<endl;
}
