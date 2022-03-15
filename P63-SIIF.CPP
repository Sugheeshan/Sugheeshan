#include<iostream.h>
#include<conio.h>
void main()
{
float P,N,SI;
clrscr();
cout<<"\n enter the principal amount";
cin>>P;
cout<<"\n enter the time:";
cin>>N;
if(N>10)
{
SI=(P*N*8)/100;
cout<<"\n simple intrest ="<<SI;
}
else
{
SI=(P*N*12)/100;
cout<<"\n simple intrest ="<<SI;
}
getch();
}