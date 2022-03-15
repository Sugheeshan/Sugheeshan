#include<iostream.h>
#include<conio.h>
void swap(int,int);
void main()
{
int a,b;
clrscr();
cout<<"\nEnter 2 numbers";
cin>>a>>b;
cout<<"\na="<<a<<"\nb="<<b;
swap(a,b);
cout<<"\nAfter swapping";
cout<<"\nA="<<a<<"\nB="<<b;
getch();
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
cout<<"\nAfter swapping";
cout<<"\nX="<<x<<"\nY="<<y;
}