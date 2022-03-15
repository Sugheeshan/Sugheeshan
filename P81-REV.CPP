#include<iostream.h>
#include<conio.h>
void main()
{
int n,m,rev;
clrscr();
cout<<"\n enter a number :";
cin>>n;
do
{
m=n%10;
rev=(rev*10)+m;
n/=10;
}
while(n>0);
cout<<"\n the reverse is"<<rev;
getch();
}