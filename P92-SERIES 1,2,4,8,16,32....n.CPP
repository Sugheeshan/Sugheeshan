#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n;
clrscr();
cout<<"\n enter a number:";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<pow(2,i)<<",";
}
getch();
}