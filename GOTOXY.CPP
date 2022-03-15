#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
textcolor(11);
for(int j=0;j<10;j++)
{
clrscr();
gotoxy(j,6); cputs("        ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
gotoxy(j,7); cputs("            ÜÜÜÜÜÜÜ ÜÜÜÜÜÜ ÜÜÜÜÜÜ");
gotoxy(j,8); cputs("               Û    Û    Û Û    Û");
gotoxy(j,9); cputs("               Û    ÛÜÜÜÛ  ÛÜÜÜÜÛ");
gotoxy(j,10);cputs("               Û    Û Û    Û    Û");
gotoxy(j,11);cputs("               Û    Û  ÛÛ  Û    Û");

gotoxy(51-j,6); cputs("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ \n\r");
gotoxy(51-j,7); cputs(" Ü    Ü ÜÜÜÜÜÜ Ü   \n\r");
gotoxy(51-j,8); cputs(" Û    Û Û      Û    \n\r");
gotoxy(51-j,9); cputs(" Û    Û ÛÜÜÜ   Û    \n\r");
gotoxy(51-j,10);cputs("  Û  Û  Û      Û    \n\r");
gotoxy(51-j,11);cputs("   ÛÛ   ÛÛÛÛÛÛ ÛÛÛÛ \n\r");

gotoxy(j,12);cputs("                          ÜÜÜÜÜÜÜ Ü    Ü");
gotoxy(j,13);cputs("                             Û    ÛÛ   Û");
gotoxy(j,14);cputs("                             Û    Û Û  Û");
gotoxy(j,15);cputs("                             Û    Û  Û Û");
gotoxy(j,16);cputs("                          ÜÜÜÛÜÜÜ Û   ÛÛ");
gotoxy(j,17);cputs("                     ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");

gotoxy(58-j,12);cputs(" ÜÜÜÜÜÜ ÜÜÜÜÜÜÜ ÜÜÜÜÜÜ \n\r");
gotoxy(58-j,13);cputs(" Û    Û    Û    Û    Û \n\r");
gotoxy(58-j,14);cputs(" Û    Û    Û    ÛÜÜÜÜÛ \n\r");
gotoxy(58-j,15);cputs(" Û    Û    Û    Û    Û \n\r");
gotoxy(58-j,16);cputs(" ÛÜÜÜÜÛ ÜÜÜÛÜÜÜ Û    Û \n\r");
gotoxy(58-j,17);cputs("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ \n\r");

delay(80);
}
gotoxy(25,25);
cout<<"press any key to continue...";
getch();
}
