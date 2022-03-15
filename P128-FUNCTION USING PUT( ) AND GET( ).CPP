#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char ch,nxt;
clrscr();
cout<<"\n enter any character :";
cin.get(ch);
cout<<"\n the entered character is :";
cout.put(ch);
nxt=ch+1;
cout<<"\n the next character is:";
cout.put(nxt);
getch();
}