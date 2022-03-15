#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
cout<<"\n enter a character:";
cin>>ch;
if((ch>='A')&&(ch<='Z'))
cout<<"\n uppercase letter";
else if((ch>='a')&&(ch<='z'))
cout<<"\n lowercase letter";
else
cout<<"\n this is not an alphabet!!";
getch();
}