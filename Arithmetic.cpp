#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{

    //showpoint noshowpoint setprecision fixed set()


    float A,B;
    cout<< "Enter two numbers: ";
    cin>>A>>B;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);


    float sum = A+B;
    cout<<setw(20)<< "sum is: " <<sum;
    cout<<endl;


    float subs = A-B;
    cout<<setw(20)<< "Substraction: "<<subs;
    cout<<endl;

    float mul = A*B;
    cout<<setw(20)<< "Multiplication: "<<mul;
    cout<<endl;

    double div = (float) A/B;  //type casting
    cout<<setw(20)<< "Dividion: "<<div;
    cout<<endl;

      //float rem=A%B;
     //cout<< "Reminder: "<<rem;
    //cout<<endl;

    getch();
}
