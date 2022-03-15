#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
void main()
{char move;int h=0,s=0,n=0,m=5;
clrscr();
for(;;)
{
move=getch();
if(move=='s')
gotoxy(s,h++);
else if(move=='w')
h--;
else if(move=='a')
s--;
else if(move=='d')
s++;
else if(move=='h')
gotoxy(n,m++);
else if(move=='y')
m--;
else if(move=='g')
n--;
else if(move=='j')
n++;
else if(move=='x')
exit(1);
clrscr();
gotoxy(s,h);
cout<<"Û";
gotoxy(n,m);
cout<<"";
if((s==n)&&(h==m))
{
clrscr();
cout<<"game over" ;
exit(-1);
}
}
getch();
}