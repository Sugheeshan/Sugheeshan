#include<iostream.h>
#include<conio.h>
void main()
{
 int choice;
 clrscr();
cout<<"\n 1.area of circle:";
cout<<"\n 2.area of rectangle";
cout<<"\n 3.area of square";
cout<<"\n 4.area of triangle";
cout<<"\n enter your choice(1-4)";
cin>>choice;
switch(choice)
{
case 1:
float r;
cout<<"\n enter the radius:";
cin>>r;
cout<<"\n area of circle="<<3.14*r*r;
break;
case 2:
float l,b;
cout<<"\n enter the length:";
cin>>l;
cout<<"\n enter the breadth:";
cin>>b;
cout<<"\n area of rectangle="<<l*b;
break;
case 3:
float s;
cout<<"\n enter the side:";
cin>>s;
cout<<"\n area of square="<<s*s;
break;
case 4:
float ba,h;
cout<<"\n enter the base:";
cin>>ba;
cout<<"\n enter the height:";
cin>>h;
cout<<"\n area of triangle="<<0.5*ba*h;
break;
default:
cout<<"\n wrong choice please enter a number from 1to4 only";
break;
}
cout<<"\n thank you";
getch();
}