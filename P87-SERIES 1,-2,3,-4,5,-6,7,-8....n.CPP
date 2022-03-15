#include<iostream.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
cout<<"\n enter a number:";
cin>>n;
for(i=1;i<=n;i++)
{
if((i%2)==0)
cout<<"\n"<<-i<<",";
else
cout<<"\n "<<i<<",";
}
getch();
}