#include<iostream.h>
#include<conio.h>
void main()
{
int yrs;
clrscr();
cout<<"\n enter the year=";
cin>>yrs;
if((yrs%4)==0)
cout<<"\nentered year is a leap year";
else
cout<<"\n the entered year is not a leap year";
getch();
}