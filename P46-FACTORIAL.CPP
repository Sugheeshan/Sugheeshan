#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
clrscr();
cout<<"\n  enter a number:";
cin>>n;
i=n;
while(i<=n)
{
fact*=i;
i++;
}
cout<<"\n "<<i<<"!="<<fact;
getch();
}