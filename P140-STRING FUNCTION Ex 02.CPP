#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char str[50];
int i,count=0;
clrscr();
cout<<"\n enter a string:";
gets(str);
for(i=0;str[i]!='\0';i++)
if(str[i]==' ')
count++;
cout<<"\n the no of spaces is:"<<count;
getch();
}

