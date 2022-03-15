#include<iostream.h>
#include<conio.h>
void prime(int);
void main()
{
int a;
clrscr();
cout<<"\nEnter a number";
cin>>a;
prime(a);
getch();
}
void prime(int x)
{
int i=2;
if((x==2)||(x==3))
cout<<"\nIt is a prime number";
else
{
if(x>3)
{
do
{
x%=i;
++i;
}
while ((x!=0)&&(i<x));
}
if (x!=0)
{
cout<<"\nIt is not a prime";
}
else
{
cout<<"\nIt is a prime number";
}
}
}