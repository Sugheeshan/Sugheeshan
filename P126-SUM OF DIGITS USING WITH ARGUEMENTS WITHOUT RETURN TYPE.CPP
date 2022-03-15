#include<iostream.h>
#include<conio.h>
void sum(int);
void main()
{
int a;
clrscr();
cout<<"\nEnter a number";
cin>>a;
sum(a);
getch();
}
void sum(int x)
{
int m,ans=0;
while(x>0)
{
m=x%10;
ans+=m;
x/=10;
}
cout<<"\nSum of digits"<<ans;
}