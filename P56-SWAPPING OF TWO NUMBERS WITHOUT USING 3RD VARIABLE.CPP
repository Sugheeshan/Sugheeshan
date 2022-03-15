#include<iostream.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
cout<<"\n enter 2 nos:";
cin>>a>>b;
cout<<"\n before swapping";
cout<<"\nA="<<a<<"\nB="<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<"\n after swapping:";
cout<<"\nA="<<a<<"\nB="<<b;
getch();
}