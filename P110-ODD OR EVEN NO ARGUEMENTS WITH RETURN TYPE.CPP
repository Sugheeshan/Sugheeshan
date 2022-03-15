#include<iostream.h>
#include<conio.h>
char evenodd();
void main()
{
char x;
clrscr();
cout<<"\nIn main";
x=evenodd();
cout<<"\nBack to main";
if(x=='E')
cout<<"\nEven number";
else
cout<<"\nOdd number";
getch();
}
char evenodd()
{
int a;
cout<<"\nInside function";
cout<<"\nEnter a number";
cin>>a;
if((a%2)==0)
return ('E');
else
return ('o');
}