#include<iostream>

using namespace std;

template<class DataType>
DataType fun(DataType a, DataType b)
{
    return a-b;
}

int main()
{
    float x,y,r;
    cin>>x>>y;
    r=fun(x,y);
    cout<<"result = "<<r;
}
