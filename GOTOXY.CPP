#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
textcolor(11);
for(int j=0;j<10;j++)
{
clrscr();
gotoxy(j,6); cputs("        様様様様様様様様様様様様�");
gotoxy(j,7); cputs("            樛樛樛� 樛樛樛 樛樛樛");
gotoxy(j,8); cputs("               �    �    � �    �");
gotoxy(j,9); cputs("               �    桀樛�  桀樛樂");
gotoxy(j,10);cputs("               �    � �    �    �");
gotoxy(j,11);cputs("               �    �  栩  �    �");

gotoxy(51-j,6); cputs("様様様様様様様様様様� \n\r");
gotoxy(51-j,7); cputs(" �    � 樛樛樛 �   \n\r");
gotoxy(51-j,8); cputs(" �    � �      �    \n\r");
gotoxy(51-j,9); cputs(" �    � 桀樛   �    \n\r");
gotoxy(51-j,10);cputs("  �  �  �      �    \n\r");
gotoxy(51-j,11);cputs("   栩   栩栩栩 栩栩 \n\r");

gotoxy(j,12);cputs("                          樛樛樛� �    �");
gotoxy(j,13);cputs("                             �    栩   �");
gotoxy(j,14);cputs("                             �    � �  �");
gotoxy(j,15);cputs("                             �    �  � �");
gotoxy(j,16);cputs("                          樛樂樛� �   栩");
gotoxy(j,17);cputs("                     様様様様様様様様様�");

gotoxy(58-j,12);cputs(" 樛樛樛 樛樛樛� 樛樛樛 \n\r");
gotoxy(58-j,13);cputs(" �    �    �    �    � \n\r");
gotoxy(58-j,14);cputs(" �    �    �    桀樛樂 \n\r");
gotoxy(58-j,15);cputs(" �    �    �    �    � \n\r");
gotoxy(58-j,16);cputs(" 桀樛樂 樛樂樛� �    � \n\r");
gotoxy(58-j,17);cputs("様様様様様様様様様様様様様� \n\r");

delay(80);
}
gotoxy(25,25);
cout<<"press any key to continue...";
getch();
}
