#include<iostream.h>
#include<conio.h>
void main()
{
int n,m,temp,rev;
clrscr();
cout<<"\n enter a number:";
cin>>n;
temp=n;
do
{
m=n%10;
rev=(rev*10)+m;
n/=10;
}
while(n>0);
{
if(temp==rev)
cout<<"\nit is a palindrome";
else
cout<<"\nit is not a palindrome";
}
getch();
}