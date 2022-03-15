#include<iostream.h>
#include<conio.h>
void main()
{
int n,i=3,f1,f2,f3;
clrscr();
f1=0;
f2=1;
cout<<"\n enter a number:";
cin>>n;
cout<<"\n"<<f1<<" "<<f2;
while(i<=n)
{
f3=f1+f2;
cout<<" "<<f3;
f1=f2;
f2=f3;
i++;
}
getch();
}