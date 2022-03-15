#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
void main()
{
char ch;
clrscr();
cout<<"\nEnter a character";
ch=getchar();
if(isalnum(ch))
cout<<"\nThe character may be a number or an alphabet";
else
cout<<"\nThis is special character";
getch();
}