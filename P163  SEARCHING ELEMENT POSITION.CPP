#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int a[100],size,item,count=0,pos=0;
clrscr();
cout<<"\nEnter no of elements needed";
cin>>size;
cout<<"\nEnter the element one by one";
for(int i=0;i<size;i++)
{
cin>>a[i];
}
cout<<"\nEnter the element to be searched";
cin>>item;
for(i=0;i<size;i++)
{
if(item==a[i])
count++;pos=i+1;break;}
if(count==0)
cout<<"\nElement not found";
else
cout<<"\nElement "<<item<<" is found at the position"<<pos;
getch();
}