#include<iostream.h>
#include<conio.h>
void main()
{
int a,c,i,n;
clrscr();
cout<<"\n enter a number :";
cin>>n;
for(i=1;i<=n;i++)
{
a=n%i;
if(a==0)
{
c=+1;
}
}
if(c==2)
cout<<"\n the given no is prime";
else
cout<<"\n given number is not prime";
getch();
}