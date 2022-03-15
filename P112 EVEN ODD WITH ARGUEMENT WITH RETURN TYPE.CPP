#include<iostream.h>
#include<conio.h>
char evenodd(int x);
void main()
{
int a;
char s;
clrscr();
cout<<"\nEnter a number";
cin>>a;
s=evenodd(a);
if(s=='e')
cout<<"\nEven number";
else
cout<<"\nOdd number";
getch();
}
char evenodd(int a)
{
if((a%2)==0)
return ('e');
else
return ('o');
}