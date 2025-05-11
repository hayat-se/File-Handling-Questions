#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    ofstream data("data.text" , ios::app);
    string name ,date_Of_Birth, place_Of_Birth;
    int age;
    float cgpa;
    int counter = 0;
    if(data.is_open())
    {
        char ch;
        cout<<"** Files Opened Successfuly **\n\n";
        do
        {
            cout<<"Enter Name : ";
            getline(cin,name);
            cout<<"Enter Age : ";
            cin>>age;
            cout<<"Enter CGPA : ";
            cin>>cgpa;
            cin.ignore();
            cout<<"Enter Date of Birth : ";
            getline(cin , date_Of_Birth);
            cout<<"Enter Place of Birth : ";
            getline(cin,place_Of_Birth);

            data << "Student Record Number "<<++counter << " : \n\n" << "Name : "<<name <<"\nAge : "<<age <<"\nCGPA : " <<cgpa <<"\nDOB : "<<date_Of_Birth <<"\nPlace Of Birth : "<<place_Of_Birth <<"\n\n";
            cout<<"Data Store Successfuly ....\n";
            cout <<"\nDo You want to Add Another Student Data (Y/N): ";
            cin>>ch;
            if(ch == 'N' || ch == 'n'){
                cout<<"\nThanks for Entering Data ❤\n";
                cout<<"Exiting........\n";
                return 0;
            }
            cin.ignore();
        }while(ch == 'Y' || 'y');
    }
    else
    {
        cout<<"Error to Open File \n";
    }
    data.close();
}