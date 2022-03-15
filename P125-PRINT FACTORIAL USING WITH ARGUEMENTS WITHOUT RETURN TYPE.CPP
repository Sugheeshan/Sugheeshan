#include<iostream.h>
#include<conio.h>
void factorial(int);
void main()
{
int a;
clrscr();
cout<<"\nEnter a number";
cin>>a;
factorial (a);
getch();
}
void factorial(int x)
{
int i=1,fact=1;
while(i<=x)
{
fact*=i;
i++;
}
cout<<"\nThe factorial is  "<<fact;
}