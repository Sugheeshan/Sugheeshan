#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()                  //ASCII VALUE FINDER
{
clrscr();
char ascii;
long int a,i;
for(a=1000;a<=5000;a++)
{
ascii=a;
cout<<a<<"-"<<ascii<<" ";
delay(100);
}
getch();
}