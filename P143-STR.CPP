#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
char s1[50]="computer";
char s2[50]="science";
clrscr();
cout<<"\n string1 =";
puts(s1);
cout<<"\n string2 =";
puts(s2);
cout<<"\n after copying!!!\n";
strcpy(s1,s2);
cout<<"\n string1 =";
puts(s1);
cout<<"\n string2 =";
puts(s2);
getch();
}