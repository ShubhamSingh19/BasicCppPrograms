#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main(){
    string x;
    int i,j;
    bool flag;
    do{
        flag=true;
        cout<< "Enter your string : ";
        cin>>x;
        if(x=="QUIT" || x=="quit" || x=="Quit"){
            exit(0);
        }
        for(i=0,j=x.length()-1; i<=x.length()/2 && j>=x.length()/2 ; i++,j--){
            if(x.at(i)!=x.at(j)){
                flag=false;
            }
        }
        if(flag==true){
            cout<<"Palandrome"<<endl;
        }
        else{
            cout<<"Not palandrome"<<endl;
        }
    }while(1);

    return 0;
}
