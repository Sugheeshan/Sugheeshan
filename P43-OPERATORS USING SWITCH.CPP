#include<iostream.h>
#include<conio.h>
void main()
{
float op1,op2,res;
char ch;
clrscr();
cout<<"\n enter two numbers :";
cin>>op1>>op2;
cout<<"\n enter an operator(+,-,*,/,%)";
cin>>ch;
cout<<"\n";
switch(ch)
{
case '+' :res=op1+op2;
	  break;
case '-' :res=op1-op2;
	  break;
case '*' :res=op1*op2;
	  break;
case '/' :if(op2==0)
	  cout<<"\n divide by zero error!!";
	  else
	  res=op2/op1;
	  break;
case '%' :if(op2==0)
	  cout<<"\n divide by zero error!!";
	  else
	  {
	  int r,q;
	  q=op2/op1;
	  r=op2-(q*op1);
	  res=r;
	  }
	  break;
default:
	  cout<<"\n wrong operator!!!";
}

cout<<"\n calculated result is:"<<res<<"\n";
getch();
}