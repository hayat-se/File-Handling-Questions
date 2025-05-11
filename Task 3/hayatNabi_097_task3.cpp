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
        int count = 0;
        cout<<"\nFile Opened in Reading mode \nFile Data :\n\n";
        while (getData.get(dataFromFile))
        {
            cout<<dataFromFile;
            count++;
        }
        getData.close();
        cout<<"\nTotal Character : "<<count <<endl;
    }
    else
    {
        cout<<"\nError while Reading from File \n";
    }
}
