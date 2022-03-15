#include<iostream.h>
#include<conio.h>
void main()
{
int no,i=2;
clrscr();
cout<<"\n enter the table you want:";
cin>>no;
while(i<=12)
{
cout<<"\n"<<i<<"*"<<no<<"="<<i*no;
i++;
}
getch();
}