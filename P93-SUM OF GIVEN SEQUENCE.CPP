#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,sum;
clrscr();
cout<<"\n enter a number:";
cin>>n;
for(i=1;i<=n;i++)
{
sum+=(1/i);
}
cout<<"\n the sum of 1/1,2/2,3/3.....1/n is"<<sum;
getch();
}