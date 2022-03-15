#include<iostream.h>
#include<conio.h>
int prime(int);
void main()
{
int a,b,num;
clrscr();
cout<<"\nEnter a number";
cin>>a;
num=a;
if((num==2)||(num==3))
cout<<"\nIt is prime";
else if(a>3)
{
b=prime(a);}
if(b!=0)
cout<<"\nIt is not a prime";
getch();
}
int prime(int x)
{
int i;
i=2;
do
{
x%=i;
++i;
}
while((x!=0)&&(i<x));
if(x!=0)
return (1);
else
return (0);
}