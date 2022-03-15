#include<iostream.h>
#include<conio.h>
void main()
{
float radius,height,voco;
clrscr();
cout<<"\n enter radius:";
cin>>radius;
cout<<"\n enter height:";
cin>>height;
voco=0.3*3.14*radius*radius*height;
cout<<"\n volume of cone="<<voco;
getch();
}