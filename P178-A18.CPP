#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
 char str[80];int i;
 clrscr();
 cout<<"\nEnter any string (Max 80 characters):";
 gets(str);
 str[0]=toupper(str[0]);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==' ')
  str[i+1]=toupper(str[i+1]);
 }
 cout<<"\nUpdated string is :"<<str;
 getch();
}



