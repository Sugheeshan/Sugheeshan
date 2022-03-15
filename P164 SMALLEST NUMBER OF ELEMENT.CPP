#include<iostream.h>
#include<conio.h>
void main()
{
int a[100],size,pos,small;
clrscr();
cout<<"\nEnter the array size:";
cin>>size;
cout<<"Enter the elements";
for(int i=0;i<size;i++)
{
cin>>a[i];
if(small>a[i])
{
small=a[i];
pos=i+1;
}
}
cout<<"\nSmallest number is "<<small<<" position is"<<pos;
getch();
}
