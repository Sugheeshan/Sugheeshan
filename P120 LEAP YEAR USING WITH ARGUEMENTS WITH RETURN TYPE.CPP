#include<iostream.h>
#include<conio.h>
int leap(int);
void main()
{
int year,lp;
clrscr();
cout<<"\nEnter an year";
cin>>year;
lp=leap(year);
if(lp==0)
cout<<"\nIt is a leap year";
else
cout<<"\nIt is not a leap year";
getch();
}
int leap(int x)
{
if((x%4)==0)
{
if((x%100)==0)
{
if((x%400)==0)
return (0);
else
return(1);
}
else
return (0);
}
else
return(1);
}
