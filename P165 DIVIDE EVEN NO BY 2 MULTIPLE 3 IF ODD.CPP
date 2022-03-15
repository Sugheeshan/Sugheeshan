#include<iostream.h>
#include<conio.h>
void main()
{
int a[100],size;clrscr();
cout<<"\nEnter the array size";
cin>>size;
cout<<"\nEnter the elements";
for(int i=0;i<size;i++)
{
cin>>a[i];
cout<<"\nAfter procssing:";
for(i=0;i<size;i++)
{
if((a[i]%2)==0)
cout<<"\nElements "<<i+1<<" is"<<a[i]/2;
else
cout<<"\nElement "<<i+1<<" is "<<a[i]*3;
}}
getch();
}