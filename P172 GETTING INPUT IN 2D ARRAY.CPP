#include<iostream.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,row,col; clrscr();
cout<<"\nEnetr no of rows ";
cin>>row;
cout<<"\nEnter no of colomns ";
cin>>col;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>a[i][j];
}
}
cout<<"\nEntered 2d array is ";
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
getch();}

