#include<iostream.h>
#include<conio.h>
#include<string.h>
typedef char string[50];
void main()
{
string word="PETERPIPER";
mixitnow(word);
cout<<word<<endl;
}
void mixitnow(string s)
{
int size=strlen(s);
for(int len=0;len<size-1;len+=2)
{
char ws=s[len];
s[len]=s[len+1];
s[len+1]=ws;
}
for(len=1;len<size;len+=2)
if(s[len]

