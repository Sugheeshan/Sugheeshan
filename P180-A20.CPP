#include<iostream.h>
#include<conio.h>
void main()
{
 int a[100][100],i,j,col,row;
 clrscr();
 cout<<"\nEnter the no of rows (Max 100):";
 cin>>row;
 cout<<"\nEnter the no of columns (Max 100):";
 cin>>col;
 cout<<"\nEnter the elements:";
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   cin>>a[i][j];
  }
 }
 cout<<"\n2D Array Follows:\n";
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   cout<<a[i][j]<<" ";
  }
  cout<<"\n";
 }
 getch();
}