#include<iostream.h>
#include<conio.h>
void main()
{
int no,res=0;
clrscr();
cout<<"\n enter a number :";
cin>>no;
while(no>0)
{
res+=no;
no--;
}
cout<<"\n the sum of first"<<no<<"natural numbers is"<<res;
getch();
}