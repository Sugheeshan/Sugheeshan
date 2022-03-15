#include<iostream.h>
#include<conio.h>
void main()
{
int t,n,m,sum=0;
clrscr();
cout<<"\n enter a number:";
cin>>n;
t=n;
while(n>0)
{
m=n%10;
sum+=m;
n/=10;
cout<<"\n ther sum of digits"<<t<<"is"<<sum;
getch();
}
}