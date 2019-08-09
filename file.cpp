#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fileObject;
    fileObject.open("newFile.txt");
    //ofstream fileObject("newFile.txt"); ...this single line is equivalent to above 2 lines.

    if(fileObject.is_open())//checks if File(newFile) is assosiated with Object(fileObject) or not
    {
        fileObject<<("Oh yeah! created a file data..lol!.");
        cout<< "Done creating!!"<<endl;
        fileObject.close();
    }
    else
    {
        cout<<"File(newFile) is not assosiated with Object(fileObject)"<<endl;
    }
}
