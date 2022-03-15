#include<iostream.h>
#include<conio.h>
void main()
{
float W,H,BMI;
clrscr();
cout<<"\n\t\t\tBODY MASS INDEX";
cout<<"\n enter the weight in kg:";
cin>>W;
cout<<"\n enter the height in m:";
cin>>H;
BMI=W/(H*H);
cout<<"\n body mass index="<<BMI;
getch();
}
