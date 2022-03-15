#include<iostream.h>
#include<conio.h>
void main()
{
int no1,no2,choice;
clrscr();
cout<<"\n enter two numbers:";
cin>>no1>>no2;
cout<<"\n 1.addition";
cout<<"\n 2.subraction";
cout<<"\n enter your choice:";
cin>>choice;
if(choice==1)
cout<<"\n addition="<<no1+no2;
else if(choice==2)
cout<<"\n subraction="<<no1-no2;
else if((choice!=1)||(choice!=2))
cout<<"\n enter the correct choice";
getch();
}