#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
char str[80];
clrscr();
cout<<"\nEnter a string ";
gets (str);
for(int i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
str[i]='-';
}
cout<<"\After changing string ";
for(i=0;i<strlen(str);i++)
cout<<str[i];
getch();
}