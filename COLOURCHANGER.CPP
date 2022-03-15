#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
int rand=0;
clrscr();
randomize();
for(int i=0;i<20;i++)
{
rand=random(10)+56;
textbackground(rand+10);
textcolor(rand);
cout<<rand;
delay(1000);
clrscr();
}
getch();
}