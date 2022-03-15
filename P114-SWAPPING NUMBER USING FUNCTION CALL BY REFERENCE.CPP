#include<iostream.h>
#include<conio.h>
void swap(int & ,int &);
void main()
{
int a,b;
clrscr();
cout<<"\n enter two nos:";
cin>>a>>b;
cout<<"\n before swapping";
cout<<"\n A="<<a<<"\n B="<<b;
swap(a,b);
cout<<"\n after swapping";
cout<<"\n A="<<a<<"\n B="<<b;
getch();
}
void swap (int &x,int &y)
{
int temp;
temp=x;
x=y;
y=temp;
}


