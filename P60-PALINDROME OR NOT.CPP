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
}
if(rev==temp)
cout<<"\n the given number is palindrome!!";
else
cout<<"\n it is not palindrome";
cout<<"\n thank you";
getch();
}
