#include<iostream>

using namespace std;

template<class FIRST, class SECOND>
FIRST comp(FIRST x, SECOND y)
{
    return x>y?x:y;
}

template<class FIRST, class SECOND>
FIRST add(FIRST x, SECOND y)
{
    return x+y;
}

int main()
{
    int b;
    double a;
    cin>>a>>b;
    cout<<"greater no = "<<comp(a,b)<<endl;
    cout<<"addition = "<<add(a,b)<<endl;
}

