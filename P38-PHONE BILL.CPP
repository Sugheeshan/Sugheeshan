#include<iostream.h>
#include<conio.h>
void main()
{
int calls;
float bills;
clrscr();
cout<<"\n enter no of outgoing calls:";
cin>>calls;
if(calls<=100)
bills=200;
else if(calls<=150)
bills=200+((calls-150)*0.60);
else if(calls<=200)
bills=200+30+((calls-150)*0.50);
else
bills=200+30+25+((calls-150)*0.40);
cout<<"\n your phone bill="<<bills;
getch();
}