#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,small;
clrscr();
cout<<"\n enter two numbers :";
cin>>a>>b;
small=(a<b)?a:b;
cout<<"\n smallest among "<<a<<" and "<<b<<" is "<<small;
getch();
}