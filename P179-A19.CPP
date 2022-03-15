#include<iostream.h>
#include<conio.h>
int Lsearch(int[],int,int);
void main()
{
 int AR[50],ITEM,N,index;
 clrscr();
 cout<<"\nEnter desried array size (Max 50):";
 cin>>N;
 cout<<"\nEnter array elements:";
 for(int i=0;i<N;i++)
 {
  cin>>AR[i];
 }
 cout<<"\nEnter element to be searched for:";
 cin>>ITEM;
 index=Lsearch(AR,N,ITEM);
 if(index==-1)
 cout<<"\nSorry !! Given element could not be found";
 else
 cout<<"\nElement found at Index:"<<index<<" , Position:"<<index+1;
 getch();
}
int Lsearch(int AR[],int size,int item)
{
 for(int i=0;i<size;i++)
 {
  if(AR[i]==item)
  return i;
 }
 return -1;
}



