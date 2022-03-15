#include<iostream.h>
#include<conio.h>
void evenodd(int x);
void main()
{
int a;
clrscr();
cout<<"\nEnter a number";
cin>>a;
evenodd(a);
getch();
}
void evenodd(int x)
{
if((x%2)==0)
cout<<"\nEven number";
else
cout<<"\nOdd number";
}