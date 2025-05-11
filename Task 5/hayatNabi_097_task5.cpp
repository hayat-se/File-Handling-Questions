#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;


int main()
{
    ofstream send_Data("num.txt");
    char ch;
    if(send_Data.is_open())
    {
        do
        {
            int numArray[3];
            for(int i=0; i<3 ; i++)
            {
                cout<<"Enter num "<<i+1 <<" : ";
                cin>>numArray[i];
                send_Data << numArray[i]  << " ";
            }
            send_Data << endl;
            cout<<"Do You want to add more 3 Numbers (Y/N) : ";
            cin>>ch;
        }while(ch == 'y' || ch == 'Y');
    }
    else
    {
        cout<<"Error To Open File \n";
    }

    ofstream send_sum("sum.txt" );
    if(send_sum.is_open())
    {
        ifstream calculate("num.txt");
        
        int gettedNum;
        string value;
        while(getline(calculate,value))
        {
            int sum=0;
            stringstream ss(value);
            while(ss >> value)
            {
                
                send_sum << value << " ";
                stringstream ss(value);
                ss >> gettedNum;
                sum+= gettedNum;
            }
            send_sum << sum <<endl; 
        }
    }
    else
    {
        cout<<"unable to Open File \n";
    }
    send_Data.close();
    
}