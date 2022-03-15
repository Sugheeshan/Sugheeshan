#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 char line[80];
 int vow_ctr=0;
 clrscr();
 cout<<"\nEnter a line:";
 gets(line);
 for(int i=0;line[i]!='\0';i++)
 {
  switch(line[i])
  {
   case'a':
   case'A':
   case'e':
   case'E':
   case'i':
   case'I':
   case'o':
   case'O':
   case'u':
   case'U':++vow_ctr;
  }
 }
 cout<<"\nThe total number of vowels in the given line is "<<vow_ctr;
 getch();
}



