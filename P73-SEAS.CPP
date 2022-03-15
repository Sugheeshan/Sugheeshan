#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
cout<<"\n enter a character (R,S,W,P,A):";
cin>>ch;
switch(ch)
{
case 'R':
cout<<"\n rainy season";
break;
case 'S':
cout<<"\n summer season";
break;
case 'W':
cout<<"\n winter season";
break;
case 'P':
cout<<"\n spring season";
break;
case 'A':
cout<<"\n autumn season";
break;
default:
cout<<"\n WRONG CHOICE PLEASE ENTER A CHARACTER FROM R,S,W,P,A ONLY!!!";
break;
}
cout<<"\n thank you!!";
getch();
}