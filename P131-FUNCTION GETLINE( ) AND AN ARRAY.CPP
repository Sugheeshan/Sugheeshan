#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char str[50];int i,count=0;
clrscr();
cout<<"\nEnter a string";
gets(str);
for(i=0;str[i]!='\0';i++)
if(str[i]==' ')
count++;
cout<<"\nThe no of space is"<<count;
getch();
}