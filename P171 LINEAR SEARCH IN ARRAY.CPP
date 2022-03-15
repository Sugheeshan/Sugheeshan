#include<iostream.h>
#include<conio.h>
int search(int [],int ,int);
void main()
{
int ar[50],item,n,index;clrscr();
cout<<"\nEnter a desired array size ";
cin>>n;
cout<<"\nEnter array one by one ";
for(int i=0;i<n;i++)
cin>>ar[i];
cout<<"\nEnter the element to be searched ";
cin>>item;
index=search(ar,n,item);
if(index==-1)
cout<<"\nSorry element not found ";
else
cout<<"\nElement found  position "<<index+1;
getch();
}
int search(int ar[],int size,int item)
{
for(int i=0;i<size;i++)
{
if(ar[i]==item)
return i;
}
return -1;
}
