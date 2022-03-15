#include<iostream.h>
#include<conio.h>
float simple(float,float,float);
void main()
{
float p,t,r,si;
clrscr();
cout<<"\nEnter principle amount , time period, rate";
cin>>p>>t>>r;
si=simple(p,t,r);
cout<<"\nSimple interest is"<<si;
getch();
}
float simple(float x,float y,float z)
{
float simplei;
simplei=(x*y*z)/100;
return (simplei);
}