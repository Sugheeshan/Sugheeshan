#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
float inch,in;
int cm,foot;
clrscr();
cout<<"\n enter height in cm:";
cin>>cm;
foot=cm/30.48;
in=fmod(cm,30.48);
inch=in/2.54;
cout<<"\n height in foot and inch="<<foot<<" "<<inch;
getch();
}