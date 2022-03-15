#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"\n enter three numbers :";
cin>>a>>b>>c;
if(a>b)
{
if(a>c)
{
cout<<"\n biggest="<<a;
}
else
{
cout<<"\n biggest="<<c;
}
}
else
if(b>c)
{
cout<<"\n biggest="<<b;
}
else
{
cout<<"\n biggest="<<c;
}

getch();
}