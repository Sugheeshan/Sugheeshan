#include<iostream.h>
#include<conio.h>
void year(int);
void main()
{
int no;
clrscr();
cout<<"\nEnter an year";
cin>>no;
year(no);
getch();
}
void year(int x)
{
if((x%4)==0&&(x%100)==0&&(x%400)==0)
cout<<"\nIt is leap year";
else
cout<<"\nIt is not a leap year";
}