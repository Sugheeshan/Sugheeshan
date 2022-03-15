#include<iostream.h>
#include<conio.h>
void main()
{
 int a[50][50],row,col,i,j;
 clrscr();
 cout<<"\nEnter no of rows and columns:";
 cin>>row>>col;
 cout<<"\nEnter the elements:";
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   cin>>a[i][j];
  }
 }
 cout<<"\nThe matrix is:\n";
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   cout<<a[i][j]<<" ";
  }
  cout<<"\n";
 }
 cout<<"\nThe tranpose of matrix is:\n";
 for(j=0;j<col;j++)
 {
  for(i=0;i<row;i++)
  {
   cout<<a[i][j]<<" ";
  }
  cout<<"\n";
 }
 getch();
}


