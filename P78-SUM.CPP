#include<iostream.h>
#include<conio.h>
void main()
{
int i=1,n,res;
clrscr();
cout<<"\n enter a number:";
cin>>n;
while(i<=n)
{
i+=2;
res+=i;
cout<<"\n"<<i;
}
cout<<"\n sum of "<<n<<" odd natural numbers are:";
cout<<res;
getch();
}


