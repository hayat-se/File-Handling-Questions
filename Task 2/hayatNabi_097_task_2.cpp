#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("task1.txt", ios::app);

    char input[100];
    if(myfile.is_open())
    {
        cout<<"\nFile Opened For Writing to File \n";
        cout<<"Enter any Text : ";
        cin.getline(input, 100);
        myfile << input <<endl;

        myfile.close();
    }
    else
    {
        cout<<"Failed to Open File\n";
    }
}
