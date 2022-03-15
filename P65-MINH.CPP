#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int min,hrs,n;
cout<<"\n enter the time in minutes";
cin>>n;
hrs=n/60;
min=n%60;
cout<<"\n time in hrs and min is ="<<hrs<<"hrs:"<<min<<"min";
getch();
}