#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<process.h>
void welcome();
void cinemas();
void place(int);
char check,mailid[15],rnum[5],cap[5],pass[7],conpass[7],uid[10],gen,res;
int i,select,mov;
void main()
{
textcolor(11);
clrscr();
randomize();
//USER ACCOUNT PROGRAM
cout<<"\n want to get inside the program[Y/N]:";
cin>>check;
clrscr();

/*cout<<"\n LOADING";
for(i=0;i<=5;i++)
{
   delay(500);
   cout<<".";
} */
if(check=='Y'||'y')
{
    for(i=0;i<1;i++)
     {
   rnum[i]=random(10)+85;
     }
   cout<<"\n prove you are not a robo\n";
   for(i=0;i<1;i++)
     {
   cout<<rnum[i];
     }
     cout<<"\n";
   for(i=0;i<1;i++)
     {
   cin>>cap[i];
      }
clrscr();
/*cout<<"\n VERIFYING";
for(i=0;i<=5;i++)
{
delay(500);
cout<<".";
}*/
/*delay(1000);
cout<<"\n MATCHING";
for(i=0;i<=5;i++)
{
delay(500);
cout<<"*";
}*/
clrscr();
cout<<"\n------------------WELCOME TO CARNIVALCINEMAS BOOKING COMPANY------------------";
for(i=0;i<1;i++)
{
if(rnum[i]==cap[i])
{
cout<<"\n ARE YOU READY TO CREATE A ACCOUNT IN OUR PROVISION";
cout<<"\n CREATE YOUR USER ID:";
gets(uid);
cout<<"\n ENTER YOUR GENDER: ";
cin>>gen;
cout<<"\n enter your mailid:";
gets(mailid);
delay(500);
/*
confirm:
cout<<"\n enter your password max of(6 character)";
for(int j=0;j<6;j++)
{
pass[j]=getch();
cout<<"*";
}
cout<<"\n CONFIRM YOUR PASSWORD";
for(int k=0;k<6;k++)
{
conpass[k]=getch();
cout<<"*";
}
cout<<"\n        ";
puts(pass);
cout<<"\n        ";
puts(conpass);
if(!(strcmp(pass,conpass)))
{*/
cout<<"\n you have succesfully joined our premiere international carnival cinemas!!";
clrscr();
/*
cout<<"\n PROVIDING DATA";
for(i=0;i<=10;i++)
{
delay(500);
cout<<".";
}
delay(100);
cout<<"\n MANAGING USER FILES";
for(i=0;i<=15;i++)
{
delay(500);
cout<<".";
}
cout<<"\n CREATING SPACE FOR YOUR ACCOUNT";
for(i=0;i<=5;i++)
{
delay(500);
cout<<".";
}
delay(1000);
clrscr();*/
if(gen=='M')
{

cout<<"\n================================================================================";
cout<<"\n\t\t\t\t WELCOME Mr."<<uid;
cout<<"\n================================================================================";
delay(2000);
cinemas();
}
else if(gen=='F')
{
cout<<"\n================================================================================";
cout<<"\n\t\t\t\t WELCOME Mrs."<<uid;
cout<<"\n================================================================================";
delay(2000);
cinemas();
}
else
cout<<"\n check your gender please ";
delay(2000);
cinemas();
}
/*
else
{
goto confirm;
}
}*/
else if(rnum[i]!=cap[i])
{
cout<<"\n verifying";
for(i=0;i<=5;i++)
{
delay(500);
cout<<".";
}
cout<<"\n you have gone wrong again!!!!are you a robo";
}
}
}
else if(check=='N'||'n')
{
cout<<"\n you are going to feel for it!!!!";
/*cout<<"\n SYSTEM CRASHING";
for(i=0;i<=5;i++)
{
delay(500);
cout<<".";
}*/
cout<<"\nthanks ya'll for trying my program see you soon!!!!";
/*cout<<"\n bii";
for(i=0;i<=5;i++)
{
delay(500);
cout<<".";
}*/
delay(3000);
exit(1);
}
else
{
clrscr();
cout<<"\n OHHH!! God why have u choose a wrong option!!";
/*cout<<"\n MOTHERBOARD CRASHING";
for(i=0;i<=5;i++)
{
delay(500);
cout<<".";
}
delay(3500);
cout<<"\n HAHA DONT GET AFRAID OF MY WORK";
for(i=0;i<=5;i++)
{
delay(500);
cout<<".";
}*/
delay(1000);
exit(1);
}
getch();
}
void cinemas()
{
clrscr();
int choose,city;
choo:
welcome();
cout<<"\n================================================================================";
cout<<"\n**********************BOOKING PORTAL****************** ["<<mailid<<"]";
cout<<"\n================================================================================";
cout<<"\n        1.BOOK TICKET ";
cout<<"\n        2.CANCELLATION OF A PREBOOKED TICKET ";
cout<<"\n        3.PRE RESERVATION ";
cout<<"\n        4.RATINGS OF THE RELEASED MOVIE ";
cout<<"\n        5.QUIT THE PORTAL";
cout<<"\n choose your option from(1~5):";
cin>>choose;
switch(choose)
{
case 1:
clrscr();
cout<<"\n..............choose your city:...............";
cout<<"\n 1. TIRUPUR";
cout<<"\n 2. COIMBATORE";
cout<<"\n 3. CHENNAI";
cout<<"\n 4. ERODE";
cout<<"\n choose any one from (1~4):";
cin>>city;
place(city);
  break;
case 2:
    cout<<"\n hi";
  break;
case 3:
    cout<<"\n hi";
  break;
case 4:
    cout<<"\n hi";
  break;
case 5:
    cout<<"\n S";
    delay(500);
    cout<<"\n E";
    delay(500);
    cout<<"\n E";
    delay(500);
    cout<<"\n Y";
    delay(500);
    cout<<"\n O";
    delay(500);
    cout<<"\n U";
 break;
default:
    cout<<"\n there is no option like this choose wisely!!!";
    delay(500);
    clrscr();
goto choo;
   break;
}
}
void place(int x)
{
switch(x)
{
case 1:
clrscr();
  cout<<"\n=====================]]]  TIRUPUR  [[[==================";
cout<<"\n total no of theaters available is:--- 12 ---";
delay(500);
cout<<"\n 1.  MPS THEATRE";
cout<<"\n 2.  USHA THEATRE";
cout<<"\n 3.  VARANASI THEATRE";
cout<<"\n 4.  LINGAM THEATRE";
cout<<"\n 5.  SRINIVASA THEATRE";
cout<<"\n 6.  DIAMOND THEATRE";
cout<<"\n 7.  SRI SAKTHI CINEMAS";
cout<<"\n 8.  GAJALAKSHMI THEATRE";
cout<<"\n 9.  KALAIVANI THEATRE";
cout<<"\n 10. MGB THEATRE";
cout<<"\n 11. TAMILNADU";
cout<<"\n 12. CINI PARK";
cin>>select;
clrscr();
switch(select)
{
case 1:
/*cout<<"\n *RATINGS AS PER THE SURVEY CONDUCTED IN THE YEAR OF 2018* \n";
delay (2000);
clrscr();
cout<<" ***2 out of 5***";
delay (1000);
clrscr();
cout<<"                   ***2 out of 5***";
delay (1000);
clrscr();
cout<<"                                       ***2 out of 5***";
delay (1000);
clrscr();
cout<<"                                                      ***2 out of 5***";*/
cout<<"\n ********************movies running on the screens******************";
cout<<"\n 1.###  DEV     ###";
cout<<"\n 2.###  PETTA   ###";
cout<<"\n 3.###  DILLUKU DHUDDU  ###";
cout<<"\n 4.###  ALITA  ###";
cin>>mov;
clrscr();
switch(mov)
{
case 1:
   cout<<"\n SHOWS STREAMING TODAY ON \n";
/*clrscr();
cout<<" ****SCREEN-1****";
delay (1000);
clrscr();
cout<<"                   ****SCREEN-1****";
delay (1000);
clrscr();
cout<<"                                       ****SCREEN-1****";
delay (1000);
clrscr();
cout<<"                                                      ****SCREEN-1****";*/
       cout<<"\n 10:30 am, 2:30 pm,4:30 pm,6:30 pm,11:30 pm ";
break;

case 2:
   cout<<"\n SHOWS STREAMING TODAY ";
/*clrscr();
cout<<" ****SCREEN-2****";
delay (1000);
clrscr();
cout<<"                   ****SCREEN-2****";
delay (1000);
clrscr();
cout<<"                                       ****SCREEN-2****";
delay (1000);
clrscr();
cout<<"                                                      ****SCREEN-2****";*/

       cout<<"\n 10:30 am, 2:30 pm,4:30 pm,6:30 pm,11:30 pm ";
break;
case 3:
   cout<<"\n SHOWS STREAMING TODAY ";
/*clrscr();
cout<<" ****SCREEN-3****";
delay (1000);
clrscr();
cout<<"                   ****SCREEN-3****";
delay (1000);
clrscr();
cout<<"                                       ****SCREEN-3****";
delay (1000);
clrscr();
cout<<"                                                      ****SCREEN-3****";*/
       cout<<"\n 10:30 am, 2:30 pm,4:30 pm,6:30 pm,11:30 pm ";
break;
case 4:
   cout<<"\n SHOWS STREAMING TODAY ";
/*clrscr();
cout<<" ****SCREEN-4****";
delay (1000);
clrscr();
cout<<"                   ****SCREEN-4****";
delay (1000);
clrscr();
cout<<"                                       ****SCREEN-4****";
delay (1000);
clrscr();
cout<<"                                                      ****SCREEN-4****";*/
       cout<<"\n 10:30 am, 2:30 pm,4:30 pm,6:30 pm,11:30 pm ";
break;
}

}
}}
void welcome()
{
for(int i=0;i<10;i++)
{
clrscr();
gotoxy(i,10); cout<<"ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n\r";
gotoxy(i,11); cout<<"º\n\r";
gotoxy(i,12); cout<<"ºÛ   Û ÛÛÛÛÛ  \n\r";
gotoxy(i,13); cout<<"ºÛßßßÛ ÛÜÜÜÛ Û \n\r";
gotoxy(i,14); cout<<"ºÛ   Û Û   Û Û \n\r";
gotoxy(i,15); cout<<"º\n\r";
gotoxy(i,16); cout<<"ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n\r";

gotoxy(33-i,10); cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n\r";
gotoxy(33-i,11); cout<<"\n\r";
gotoxy(34-i,12); cout<<"Û     Û Ûßßß Û   \n\r";
gotoxy(34-i,13); cout<<" Û Û Û  Ûßßß Û   \n\r";
gotoxy(34-i,14); cout<<"  Û Û   ÛÜÜÜ ÛÜÜÜ\n\r";
gotoxy(33-i,15); cout<<"\n\r";
gotoxy(33-i,16); cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n\r";

gotoxy(43-i,10); cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n\r";
gotoxy(43-i,11); cout<<"º\n\r";
gotoxy(52-i,12); cout<<"Ûßß ÛßÛ ÛÛ ÛÛ Ûßßß ô  ô º\n\r";
gotoxy(52-i,13); cout<<"Û   Û Û Û Û Û ÛÜÜÜ õ ô õ º\n\r";
gotoxy(52-i,14); cout<<"ÛÜÜ ÛÜÛ Û Û Û ÛÜÜÜ  õ  º\n\r";
gotoxy(43-i,15); cout<<"º\n\r";
gotoxy(43-i,16); cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n\r";
delay(200);

}
delay(500);
}