#include<iostream.h>
#include<conio.h>
void main()
{
int n;
clrscr();
cout<<"\n enter a number:";
cin>>n;
if(n>0)
cout<<"\n positive number";
else if(n<0)
cout<<"\n negative number";
else if(n==0)
cout<<"\n zero number";
else
cout<<"\n you are wrong !!";
getch();
}