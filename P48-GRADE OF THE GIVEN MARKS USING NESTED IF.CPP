#include<iostream.h>
#include<conio.h>
void main()
{
int marks;
clrscr();
cout<<"enter your marks=";
cin>>marks;
if(marks>=90)
cout<<"\n your grade is A";
else if(marks>=80)
cout<<"\n your grade is B";
else if(marks>=70)
cout<<"\n your grade is C";
else if(marks>=60)
cout<<"\n your grade is D";
else if(marks>=50)
cout<<"\n your grade is E";
else
cout<<"\n you are fail";
getch();
}