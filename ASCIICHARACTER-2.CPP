#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()                  //ASCII VALUE FINDER
{
clrscr();
char ascii;
long int a,i;
char waste;
cin>>a;
for(i=1;a<=1000000;a++,i++)
{
if(a==1306||1562)
a++;
ascii=a;
cout<<a<<"-"<<ascii<<"\n";
if((i%20)==0)
waste=getch();

}
getch();
}