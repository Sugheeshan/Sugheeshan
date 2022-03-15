#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
cout<<"\n enter an alphabet";
cin>>ch;
if(ch=='a'||ch=='e'||ch=='o'||ch=='u')
cout<<"\n the alphabet is an vowel";
else
cout<<"\n the alphabet is consonant";
getch();
}