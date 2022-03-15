#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

char string1[50],string2[50];
cout<<"\n enter strings:";
cin.getline(string1,50);
cin.getline(string2,50);
int i,j;
for(i=0;string1[i]!='\0';i++)
for(j=0;string1[j]!='\0';j++)
if(i==j)
cout<<"\n both strings contains equal characters";
else
cout<<"\n the given string have different no of characters";
getch();
}