#include<Iostream.h>
#include<conio.h>
void main()
{
int a;
clrscr();
cout<<"\n enter a number:";
cin>>a;
cout<<"\n no.of.months in the given num="<<a/30;
cout<<"\n no of days remaining in the given num="<<a%30;
getch();
}