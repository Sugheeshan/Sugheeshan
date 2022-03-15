#include<iostream.h>
#include<conio.h>
void main()
{
int a[50][50],row,col;
clrscr();
cout<<"\nEnter rows and coloumns ";
cin>>row>>col;
cout<<"\nEnter the elements for the matrix ";
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
cin>>a[i][j];
}
}
cout<<"\nThe transposed matrix is \n ";
for(int j=0;j<row;j++)
{
for(int i=0;i<col;i++)
{
cout<<a[i][j];
}
}
getch();
}
