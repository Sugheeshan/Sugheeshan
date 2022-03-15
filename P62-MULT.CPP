#include<iostream.h>
#include<conio.h>
void main()
{
int t,n,m,multi=1;
clrscr();
cout<<"\n enter a number:";
cin>>n;
t=n;
while(n>0)
{
m=n%10;
multi*=m;
n/=10;
}
cout<<"\n the multiplication of the digits"<<t<<"is"<<multi;
getch();
}