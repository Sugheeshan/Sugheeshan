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
bill=0;
else if(unit<=200)
bill=((unit-100)*5);
else if(unit<=300)
bill=((unit-200)*10)+500;
else if(unit<=400)
bill=((unit-300)*15)+500+1000;
else if(unit<=500)
bill=((unit-400)*20)+500+1000+1500;
else
bill=((unit-500)*25)+500+1000+1500+2000;
cout<<"\n your electric bill="<<bill;
getch();
}