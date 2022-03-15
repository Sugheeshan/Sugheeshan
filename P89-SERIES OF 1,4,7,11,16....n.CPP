#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,a;
clrscr();
a=1;
cout<<"\n enter a number:";
cin>>n;
for(i=0;i<=n;i+=1)
{
a+=i;
cout<<a<<",";
}
getch();
}