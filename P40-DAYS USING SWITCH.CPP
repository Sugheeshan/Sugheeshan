#include<iostream.h>
#include<conio.h>
void main()
{
 int days;
 clrscr();
cout<<"\n enter a number(1-7):";
cin>>days;
switch(days)
{
case 1:
cout<<"\n *monday*";
break;
case 2:
cout<<"\n *tuesday*";
break;
case 3:
cout<<"\n *wednesday*";
break;
case 4:
cout<<"\n *thursday*";
break;
case 5:
cout<<"\n *friday*";
break;
case 6:
cout<<"\n *saturday*";
break;
case 7:
cout<<"\n *sunday*";
break;
default:
cout<<"\n wrong choice please enter a number from 1to7 only";
break;
}
cout<<"\n thank you";
getch();
}