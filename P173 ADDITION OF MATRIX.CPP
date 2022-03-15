#include<iostream.h>
#include<conio.h>
void main()
{
int a[50][50],b[50][50],c[50][50];
int rowa,rowb,cola,colb;
clrscr();
cout<<"\nEnter the rows and coloumns of matrix a ";
cin>>rowa>>cola;
cout<<"\nEnter the rows and size of matrix b ";
cin>>rowb>>colb;
if((rowa=rowb)&&(cola==colb))
{
cout<<"\nEnter the elements for matrix a ";
for(int i=0;i<rowa;i++)
{
for(int j=0;j<cola;j++)
{
cin>>a[i][j];
}
}
cout<<"\nEnter the elements of matrix b ";
for(i=0;i<rowb;i++)
{
for(int j=0;j<colb;j++)
{
cin>>b[i][j];
}
}
for(i=0;i<rowa;i++)
{
for(int j=0;j<cola;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
cout<<"\nFirst matrix \n";
for(i=0;i<rowa;i++)
{
for(int j=0;j<cola;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
cout<<"\nSecond matrix \n";
for(i=0;i<rowb;i++)
{
for(int j=0;j<colb;j++)
{
cout<<b[i][j]<<" ";
}
cout<<"\n";
}
cout<<"\nResult \n";
for(i=0;i<rowa;i++)
{
for(int j=0;j<cola;j++)
{
cout<<c[i][j]<<" ";
}
cout<<"\n";
}
}
else
cout<<"\nCannot be added ";
getch();
}





