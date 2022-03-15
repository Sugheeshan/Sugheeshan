#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cout<<"\n enter a number";
cin>>n;
if((n%2!=0)&&(n>0))
{
cout<<"\n square of the number="<<n*n;
}
else
{
cout<<"\n cube of the number="<<n*n*n;
}
cout<<"\n thank you!!!";
getch();
}