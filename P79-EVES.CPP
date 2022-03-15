#include<iostream.h>
#include<conio.h>
void main()
{
int n,i=0,res;
clrscr();
cout<<"\n enter a number:";
cin>>n;
do
{
res+=i;
i+=2;
}
while (n>=i);
cout<<"\nthe sum of "<<n<<"even no are"<<res;

getch();
}