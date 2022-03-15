#include<iostream.h>
#include<conio.h>
void main()
{
int unit;
float bill;
clrscr();
cout<<"\n enter no of units:";
cin>>unit;
if(unit<=100)
bill=(unit*0.40)+50;
else if(unit<=300)
bill=((unit-100)*0.50)+50+40;
else
bill=((unit-300)*0.60)+50+40+100;
cout<<"\n your electric bill="<<bill;
getch();
