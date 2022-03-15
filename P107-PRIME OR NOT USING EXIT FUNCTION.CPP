#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int a,count=0,num;
clrscr();
cout<<"\n enter a number:";
cin>>num;
for(int i=1;i<=num;i++)
{
a=num%i;
if(a==0)
count+=1;
}
if(count==2)
{
cout<<"\n "<<num<<"is not a prime number";
exit(0);
}
getch();
}
