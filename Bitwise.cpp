#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a=32;
    int b=12;
    int c;

    c=a&b;
    cout<<c<<endl;

    c=a|b;
    cout<<c<<endl;

    c=a^b;
    cout<<c<<endl;

    c = a>>3;    // right shift 3 time divided by 2
    cout<<c<<endl;

    c = a<<3;    // left shift 3 time multiple by 2
    cout<<c;

    getch();
}
