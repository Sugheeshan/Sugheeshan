#include<iostream.h>
#include<conio.h>
void si();
void main()
{
clrscr();
si();
getch();
}
void si()
{
float p,n,r;
cout<<"\nEnter the principle amount,time period,rate";
cin>>p>>n>>r;
cout<<"\nSimple interest is"<<(p*n*r)/100;
}