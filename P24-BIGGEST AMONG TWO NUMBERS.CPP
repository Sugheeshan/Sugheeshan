#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,big;
clrscr();
cout<<"\n enter two numbers :";
cin>>a>>b;
big=(a>b)?a:b;
cout<<"\n biggest among "<<a<<" and "<<b<<" is "<<big;
getch();
}