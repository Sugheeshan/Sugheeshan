#include<iostream.h>
#include<conio.h>
void main()
{
int n,m,temp,rev=0;
clrscr();
cout<<"\n enter a number:";
cin>>n;
temp=n;
while(n>0)
{
m=n%10;
rev=(rev*10)+m;
n/=10;
cout<<"\n the reverse of"<<temp<<"is"<<rev;
getch();
}
}