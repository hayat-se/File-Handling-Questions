#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    char dataFromFile;
    ifstream getData;
    getData.open("C:\\Users\\PC\\OneDrive\\Desktop\\OOPs Lab\\Lab 12\\Task 2\\task1.txt");

    if(getData)
    {
        cout<<"\nFile Opened for Reading from File \nFile Data :\n";
        while (getData.get(dataFromFile))
        {
            cout<<dataFromFile;
        }
        getData.close();
    }
    else
    {
        cout<<"\nError while Reading from File \n";
    }
}
