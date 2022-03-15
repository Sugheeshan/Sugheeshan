#include<ctype.h>
#include<stdio.h>
void main()
{
char ch;
clrscr();
cout<<"\nEnter a character";
ch=getchar();
if(isdigit(ch))
cout<<"\nThe character is digit";
else
cout<<"\nThe character is not digit";
getch();
}