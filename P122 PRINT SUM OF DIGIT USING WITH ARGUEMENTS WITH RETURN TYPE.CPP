#include<iostream.h>
#include<conio.h>
int sum(int);
void main()
{
int a,b;
clrscr();
cout<<"\nEnter a number";cin>>a;
b=sum(a);
cout<<"\nThe sum is ="<<b;
getch();
}
int sum(int x)
{
int m,ans=0;
while(x>0)
{
m=x%10;
ans+=m;
x/=10;
}
return (ans);
}