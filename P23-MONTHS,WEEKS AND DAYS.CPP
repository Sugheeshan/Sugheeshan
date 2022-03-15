#include<iostream.h>
#include<conio.h>
void main()
{
int a;
clrscr();
cout<<"\n enter a number:";
cin>>a;
cout<<"\n no.of.months="<<a/30;
cout<<"\n no.of.weeks="<<(a%30)/7;
cout<<"\n no.of.remaining days="<<(a%30)%7;
getch();
}