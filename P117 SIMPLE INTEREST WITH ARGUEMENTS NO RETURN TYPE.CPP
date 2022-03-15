#include<iostream.h>
#include<conio.h>
void simple(float,float,float);
void main()
{
float p,r,t;
clrscr();
cout<<"\nEnter principle amount,time period,rate";
cin>>p>>r>>t;
simple(p,r,t);
getch();
}
void simple (float p,float r,float t)
{
cout<<"\nSimple interest is"<<(p*r*t)/100;
}