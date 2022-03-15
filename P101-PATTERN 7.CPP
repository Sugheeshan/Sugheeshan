#include<iostream.H>
#include<conio.h>
void main()
{
clrscr();
for(int i=5;i>=1;i--)
{
for(int j=5;j>=i;j--)
{
cout<<j<<" ";
}
cout<<"\n";
}
getch();
}