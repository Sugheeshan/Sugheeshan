#include<iostream.h>
#include<conio.h>
void main()
{
float cp,sp;
clrscr();
cout<<"\n enter the cost price:";
cin>>cp;
cout<<"\n enter the selling price:";
cin>>sp;
if(sp>cp)
{
cout<<"\n YOU HAVE ACQUIRED PROFIT!!!";
cout<<"\n profit="<<sp-cp;
}
else if(cp>sp)
{
cout<<"\n YOU HAVE ACQUIRED LOSS!!!!";
cout<<"\n loss="<<cp-sp;
}
else
{
cout<<"\n YOU HAVE ACQUIRED NEITHER LOSS NOR PROFIT!!";
}
cout<<"\n thank you!!!";
getch();
}