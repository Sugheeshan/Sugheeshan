#include<iostream.h>
#include<conio.h>
int factorial(int);
void main()
{
int a,b;
clrscr();
cout<<"\nEnter a number";
cin>>a;
b=factorial (a);
cout<<"\nThe factorial ="<<b;
getch();
}
int factorial(int x)
{
int i=1,fact=1;
while(i<=x)
{
fact*=i;
i++;
}
return(fact);
}