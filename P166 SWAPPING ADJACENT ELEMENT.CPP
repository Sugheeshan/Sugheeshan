#include<iostream.h>
#include<conio.h>
void main()
{
int a[100],size,temp;
clrscr();
cout<<"\nEnter the no of elements ";
cin>>size;
cout<<"\nEnter the elements one by one \n";
for(int i=0;i<size;i++)
{
cin>>a[i];
}
cout<<"\nBefore swapping";
for(i=0;i<size;i++)
{cout<<a[i]<<" ";
}
for(int j=0;j<size;j++)
{
temp=a[i];
a[j]=a[j+1];
a[j+1]=temp;
}
cout<<"\nAfter swapping \n";
for(j=0;j<size;j++)
cout<<a[j]<<" ";
getch();
}
