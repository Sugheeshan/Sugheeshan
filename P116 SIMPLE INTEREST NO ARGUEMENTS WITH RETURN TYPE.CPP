#include<iostream.h>
#include<conio.h>
float simple();
void main()
{
float si;
clrscr();
si=simple();
cout<<"\nSimple interest is"<<si;
getch();
}
float simple()
{
float p,n,r,simple;
cout<<"\nEnter principle amount , time period , rate";
cin>>p>>r>>n;
simple=(p*n*r)/100;
return (simple);
}