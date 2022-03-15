#include<iostream.h>
#include<conio.h>
void addition();
void main()
{
clrscr();
addition();
cout<<"\nAfter returning from addition";
getch();
}
void addition()
{
int a,b;
cout<<"\nEnter 2 number";
cin>>a>>b;
cout<<"\nSum="<<a+b;
}