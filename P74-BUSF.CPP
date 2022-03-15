#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
cout<<"\n enter a character (D,R,W,C):";
cin>>ch;
switch(ch)
{
case 'D':
cout<<"\n YOUR BUS FAIR=Rs.4";
break;
case 'R':
cout<<"\n YOUR BUS FAIR=Rs.5";
break;
case 'W':
cout<<"\n YOUR BUS FAIR=Rs.10";
break;
case 'C':
cout<<"\n YOUR BUS FAIR=Rs.12";
break;
default:
cout<<"\n WRONG CHOICE PLEASE ENTER A CODE FROM D,R,W,C ONLY!!!";
break;
}
cout<<"\n thank you!!";
getch();
}