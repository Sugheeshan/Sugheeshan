#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char ch,nxt;
clrscr();
cout<<"\n enter any character :";
ch=getchar();
cout<<"\n the entered character is :";
putchar(ch);
nxt=ch+1;
cout<<"\n the next character is:";
putchar(nxt);
getch();
}