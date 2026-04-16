#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int X;
    cout<< "Enter Any Integer Number: ";
    cin>>X;

    if(X>0)
    {
        cout<< "Positive";
    }
    else if(X<0)
    {
        cout<< "Negative";
    }

    else
    {
        cout<< "Zero";    // no condition...Print else
    }

    getch();
}
