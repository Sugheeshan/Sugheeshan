#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
char string1[50];
int length;
clrscr();
cout<<"\n enter a string(max 50 characters):";
gets(string1);
length=strlen(string1);
cout<<"\n string length ="<<length;
getch();
}