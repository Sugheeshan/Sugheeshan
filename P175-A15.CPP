#include<iostream.h>
#include<conio.h>
void main()
{
 int a[100],size,temp;
 clrscr();
 cout<<"\nEnter the no of elements:";
 cin>>size;
 cout<<"\nEnter array elements:";
 for(int i=0;i<size;i++)
 cin>>a[i];
 cout<<"\nBefore Sorting:";
 for(i=0;i<size;i++)
 cout<<a[i]<<" ";
 for(i=0;i<size-1;i++)
 {
  for(int j=i+1;j<size;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  }
 }
 cout<<"\nAfter Sorting:";
 for(i=0;i<size;i++)
 cout<<a[i]<<" ";
 getch();
}


