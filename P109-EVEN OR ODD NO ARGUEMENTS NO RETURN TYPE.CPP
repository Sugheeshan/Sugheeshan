#include<iostream.h>
#include<conio.h>
void evenodd();
void main()
{
clrscr();
cout<<"\n in main():";
evenodd();
cout<<"\n back to main():";
getch();
}
void evenodd()
{
int a;
cout<<"\n inside function:";
cout<<"\n enter a number:";
cin>>a;
if((a%2)==0)
cout<<"\n even number";
else
cout<<"\n odd number";
}
