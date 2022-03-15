#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"\n enter three numbers ";
cin>>a>>b>>c;
if(a>b)
if(c>b)
if(a>c)
cout<<"\n"<<a<<","<<c<<","<<b;
else
cout<<"\n"<<c<<","<<a<<","<<b;
else
cout<<"\n"<<a<<","<<b<<","<<c;
else
if(c>b)
cout<<"\n"<<c<<","<<b<<","<<a;
else
if(a>c)
cout<<"\n"<<b<<","<<a<<","<<c;
else
cout<<"\n"<<b<<","<<c<<","<<a;
getch();
}