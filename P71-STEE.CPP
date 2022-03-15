#include<iostream.h>
#include<conio.h>
void main()
{
int H,T;float C;
clrscr();
cout<<"\n enter hardness:";
cin>>H;
cout<<"\n enter carbon content:";
cin>>C;
cout<<"\n enter tensile strength:";
cin>>T;
if((H>50)&&(C<0.7)&&(T>5600))
cout<<"\n GRADE IS 10";
else if((H>50)&&(C<0.7))
cout<<"\n GRADE IS 9";
else if((C<0.7)&&(T>5600))
cout<<"\n GRADE IS 8";
else if((H>50)&&(T>5600))
cout<<"\n GRADE IS 7";
else if((H>50)||(C<0.7)||(T>5600))
cout<<"\n GRADE IS 6";
else
cout<<"\n THANK YOU!!!";
getch();
}