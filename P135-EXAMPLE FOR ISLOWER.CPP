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
if(islower(ch))
cout<<"\nThe given character is lowercase";
else
cout<<"\nThe given character is uppercase ";
getch();
}