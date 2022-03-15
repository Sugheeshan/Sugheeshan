#include<iostream.h>
#include<conio.h>
void main()
{
float radius,height,voc;
clrscr();
cout<<"\n enter radius:";
cin>>radius;
cout<<"\n enter height:";
cin>>height;
voc=3.14*radius*radius*height;
cout<<"\n volume of cone="<<voc;
getch();
}