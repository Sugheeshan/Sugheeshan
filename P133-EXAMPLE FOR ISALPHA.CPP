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
if(isalpha(ch))
cout<<"\nThe character is alphabet";
else
cout<<"\nThe character is not alphabet";
getch();
}