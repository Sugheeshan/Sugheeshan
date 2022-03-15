#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
clrscr();
int i;unsigned int seed;
time_t t;
seed=(int)time(&t);
srand(seed);
for(i=0;i<5;i++)
{
cout<<rand()<<endl;
}
getch();
}
