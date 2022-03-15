#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int vow=0;
char line[80];
cout<<"\nEnter a line ";
gets(line);
for(int i=0;line[i]!='\0';i++)
{
switch(line[i])
{
case 'a':
case'A':
case'E':
case'e':
case'i':
case'I':
case'o':
case'O':
case'u':
case'U':++vow;
}
}
cout<<"\nTotal no of vowels in the given line is";
cout<<vow;
getch();
}