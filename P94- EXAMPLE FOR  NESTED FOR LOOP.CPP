#include<iostream.h>
#include<conio.h>
void main()
{
int sum;
clrscr();
for(int i=1;i<=3;i++)
{
for(int j=1;j<=i;j++)
{
sum+=j;
}
}cout<<"\nSum=";
cout<<sum;
getch();}