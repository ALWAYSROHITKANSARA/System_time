#include<iostream.h>
#include<time.h>
#include<conio.h>
void main()
{
 clrscr();
 while(1)
 {
 _setcursortype(0);
 time_t t;
 t=time(0);
 gotoxy(35,12);
 cout<<ctime(&t);
 if (kbhit())
 return;
 }
}