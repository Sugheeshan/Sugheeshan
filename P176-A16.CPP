#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 char str[80];
 clrscr();
 cout<<"\nEnter a string(Max 79 characters):";
 gets(str);
 for(int i=0;str[i]!='\0';i++)
 if(str[i]==' ')
 str[i]='-';
 cout<<"\nAfter changing the string:";
 puts(str);
 getch();
}


