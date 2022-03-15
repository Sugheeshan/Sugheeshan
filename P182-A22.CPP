#include<iostream.h>
#include<conio.h>
void main()
{
 int a[50][50],b[50][50],c[50][50];
 int rowA,colA,rowB,colB,i,j;
 clrscr();
 cout<<"\nEnter the no of rows and columns of A matrix:";
 cin>>rowA>>colA;
 cout<<"\nEnter the no of rows and columns of B matrix:";
 cin>>rowB>>colB;
 if((rowA==rowB)&&(colA==colB))
 {
  cout<<"\nEnter the elements of A matrix:";
  for(i=0;i<rowA;i++)
  {
   for(j=0;j<colA;j++)
   {
    cin>>a[i][j];
   }
  }
  cout<<"\nEnter the elements of B matrix:";
  for(i=0;i<rowB;i++)
  {
   for(j=0;j<colB;j++)
   {
    cin>>b[i][j];
   }
  }
  for(i=0;i<rowA;i++)
  {
   for(j=0;j<colA;j++)
   {
    c[i][j]=a[i][j]-b[i][j];
   }
  }
  cout<<"\nA matrix:\n";
  for(i=0;i<rowA;i++)
  {
   for(j=0;j<colA;j++)
   {
    cout<<a[i][j]<<" ";
   }
   cout<<"\n";
  }
  cout<<"\nB matrix:\n";
  for(i=0;i<rowB;i++)
  {
   for(j=0;j<colB;j++)
   {
    cout<<b[i][j]<<" ";
   }
   cout<<"\n";
  }
  cout<<"\nResultant matrix:\n";
  for(i=0;i<rowA;i++)
  {
   for(j=0;j<colA;j++)
   {
    cout<<c[i][j]<<" ";
   }
   cout<<"\n";
  }
 }
 else
 cout<<"\nMatrix cannot be subtracted:";
 getch();
}



