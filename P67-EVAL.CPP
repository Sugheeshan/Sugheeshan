#include<iostream.h>
#include<conio.h>
void main()
{
int mark;
clrscr();
cout<<"\n enter a mark from (0-100):";
cin>>mark;
if(mark>=90)
cout<<"\n excellent performance";
else if(mark>=80)
cout<<"\n very good performance";
else if(mark>=70)
cout<<"\n good performance";
else if(mark>=60)
cout<<"\n average performance";
else
cout<<"\n poor performance";
getch();
}