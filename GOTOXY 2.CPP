#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()

{
textcolor (11);
for(int i=0;i<10;i++)
{
clrscr();
gotoxy(i,10); cout<<"浜様様様様様様様\n\r";
gotoxy(i,11); cout<<"�\n\r";
gotoxy(i,12); cout<<"裁   � 栩栩�  \n\r";
gotoxy(i,13); cout<<"裁烝炳 桀樛� � \n\r";
gotoxy(i,14); cout<<"裁   � �   � � \n\r";
gotoxy(i,15); cout<<"�\n\r";
gotoxy(i,16); cout<<"藩様様様様様様様\n\r";

gotoxy(33-i,10); cout<<"様様様様様様様様�\n\r";
gotoxy(33-i,11); cout<<"\n\r";
gotoxy(34-i,12); cout<<"�     � 桎烝 �   \n\r";
gotoxy(34-i,13); cout<<" � � �  桎烝 �   \n\r";
gotoxy(34-i,14); cout<<"  � �   桀樛 桀樛\n\r";
gotoxy(33-i,15); cout<<"\n\r";
gotoxy(33-i,16); cout<<"様様様様様様様様�\n\r";

gotoxy(43-i,10); cout<<"様様様様様様様様様様様様様様様様様�\n\r";
gotoxy(43-i,11); cout<<"�\n\r";
gotoxy(52-i,12); cout<<"桎� 桎� 栩 栩 桎烝 �  � �\n\r";
gotoxy(52-i,13); cout<<"�   � � � � � 桀樛 � � � �\n\r";
gotoxy(52-i,14); cout<<"桀� 桀� � � � 桀樛  �  �\n\r";
gotoxy(43-i,15); cout<<"�\n\r";
gotoxy(43-i,16); cout<<"様様様様様様様様様様様様様様様様様�\n\r";
delay(100);

}
getch();
}
