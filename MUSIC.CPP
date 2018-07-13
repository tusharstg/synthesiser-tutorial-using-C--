#include<iostream.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void c(int p)
{
 {
  sound(261.6);
  delay(p);
  nosound();
 }
}
void cs(int g)
{
 {
  sound(277.2);
  delay(g);
  nosound();
 }
}

void d(int q)
{
 {
  sound(293.7);
  delay(q);
  nosound();
 }
}
void ds(int h)
{
 {
  sound(311.1);
  delay(h);
  nosound();
 }
}

void e(int r)
{
 {
  sound(329.6);
  delay(r);
  nosound();
 }
}
void f(int s)
{
 {
  sound(349.2);
  delay(s);
  nosound();
 }
}
void fs(int i)
{
 {
  sound(370);
  delay(i);
  nosound();
 }
}

void g(int t)
{
 {
  sound(392.0);
  delay(t);
  nosound();
 }
}
void gs(int j)
{
 {
  sound(415.3);
  delay(j);
  nosound();
 }
}

void a(int u)
{
 {
  sound(440);
  delay(u);
  nosound();
 }
}
void as(int l)
{
 {
  sound(466.2);
  delay(l);
  nosound();
 }
}

void b(int v)
{
 {
  sound(493.9);
  delay(v);
  nosound();
 }
}
void c1(int w)
{
 {
  sound(523.3);
  delay(w);
  nosound();
 }
}
void brk(int x)
{
 {
  sound(0);
  delay(x);
  nosound();
 }
}
void alarm()
{
  for(int i=1;i<3;i++)
 {
  sound(1800);
  delay(100);
  nosound();
  brk(200);
  clrscr();
 }
 brk(500);
 for(i=1;i<4;i++)
 {
  sound(1800);
  delay(100);
  nosound();
  brk(50);
  clrscr();
 }
 brk(500);
 for(i=1;i<5;i++)
 {
  sound(1800);
  delay(100);
  nosound();
  brk(50);
  clrscr();
 }
 brk(500);
 for(i=1;i<40;i++)
 {
  sound(1800);
  delay(100);
  nosound();
  brk(50);
  clrscr();
 }
}
void piano()
{
   clrscr();
   char m;
   cout<<"INDIAN CLASSICAL NOTE\tWESTERN NOTE\tPRESS KEY\n";
   cout<<"Sa\t\t\tC\t\ts\n";
   cout<<"Re'\t\t\tC#\t\tR\n";
   cout<<"Re\t\t\tD\t\tr\n";
   cout<<"Ga'\t\t\tD#\t\tG\n";
   cout<<"Ga\t\t\tE\t\tg\n";
   cout<<"Ma\t\t\tF\t\tm\n";
   cout<<"Ma'\t\t\tF#\t\tM\n";
   cout<<"Pa\t\t\tG\t\tp\n";
   cout<<"Dha'\t\t\tG#\t\tD\n";
   cout<<"Dha\t\t\tA\t\td\n";
   cout<<"Ni'\t\t\tA#\t\tN\n";
   cout<<"Ni\t\t\tB\t\tn\n";
   cout<<"Saa\t\t\tC2\t\tS\n";
   cout<<"Press e to exit\n\n";
   cout<<"enter a character\t";
 do
{
 m=getche();
 if(m=='s')
 c(50);
 else if(m=='R')
 cs(50);
 else if(m=='r')
 d(50);
 else if(m=='g')
 e(50);
 else if(m=='G')
 ds(50);
 else if(m=='m')
 f(50);
 else if(m=='M')
 fs(50);
 else if(m=='p')
 g(50);
 else if(m=='d')
 a(50);
 else if(m=='D')
 gs(50);
 else if(m=='n')
 b(50);
 else if(m=='N')
 as(50);
 else if(m=='S')
 c1(50);
 else if(toupper(m)!='E')
 cout<<"  WRONG KEY  ";
}while(toupper(m)!='E');
 cout<<"\n\nthanx for playing\n";
 getch();
}
void ttls()
{
 clrscr();
 cout<<"TWINKLE TWINKLE LITTLE STAR.. *** \n";
 c(400);brk(100);c(500);g(400);brk(100);g(500);a(400);brk(100);a(500);g(500);
 brk(500);
 cout<<"HOW I WONDER WHAT YOU ARE\n";
 f(400);brk(100);f(500);e(400);brk(100);e(500);d(400);brk(100);d(500);c(500);
 brk(500);
 cout<<"UP ABOVE THE WORLD SO HIGH\n";
 g(200);brk(500);g(200);f(400);brk(100);f(500);e(400);brk(100);e(500);d(500);
 brk(500);
 cout<<"LIKE A DIAMOND IN THE SKY.. \n";
 g(400);brk(100);g(500);f(400);brk(100);f(500);e(500);d(500);c(500);
}
void ttlst()
{
 w:
 clrscr();
 char t;
 l1:
 cout<<"\nTWINKLE TWINKLE LITTLE STAR.. *** \n";
 cout<<"press key s  s  p  p  d  d  p\n";
 t=getche(); if(t=='s')c(400);
 else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='s')c(500);
 else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='p')g(400);
 else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='p')g(400);
 else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='d')a(400);
 else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='d')a(400);
 else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='p')g(500);
 else {cout<<"WRONG KEY";goto l1;}
 l2:
 cout<<"\nHOW I WONDER WHAT YOU ARE\n";
 cout<<"press key m  m  g  g  r  r  s\n";
 t=getche(); if(t=='m')f(400); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='m')f(500); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='g')e(400); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='g')e(400); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='r')d(400); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='r')d(400); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='s')c(500); else {cout<<"WRONG KEY";goto l2;}
 l3:
 cout<<"\nUP ABOVE THE WORLD SO HIGH\n";
 cout<<"press key p  p  m  m  g  g  r\n";
 t=getche(); if(t=='p')g(400); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='p')g(500); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='m')f(400); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='m')f(400); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='g')e(400); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='g')e(400); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='r')d(500); else {cout<<"WRONG KEY";goto l3;}
 l4:
 cout<<"\nLIKE A DIAMOND IN THE SKY.. \n";
 cout<<"press key p  p  m  m  g  r  s\n";
 t=getche(); if(t=='p')g(400); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='p')g(500); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='m')f(400); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='m')f(400); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='g')e(400); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='r')d(400); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='s')c(500); else {cout<<"WRONG KEY";goto l4;}
 char l;
 cout<<"\nDO YOU WANT TO PLAY THIS TUTORIAL AGAIN(y/n)\n";
 cin>>l;
 if(toupper(l)=='Y')
 goto w;
 else
 cout<<"THANK YOU FOR USING THIS TUTORIAL\n";
}

void jbjb()
{
 clrscr();
 cout<<"JINGLE BELLS JINGLE BELLS..\n";
 e(200);brk(100);e(200);brk(100);e(400);
 brk(300);
 e(200);brk(100);e(200);brk(100);e(400);brk(200);
 cout<<"JINGLE ALL THE WAY..\n";
 e(200);brk(100);g(200);brk(100);c(450);d(200);e(600);brk(200);
 cout<<"oh what fun it is to ride\n";
 f(200);brk(100);f(200);brk(100);f(200);brk(400);f(100);brk(50);f(200);brk(100);
 e(200);brk(100);e(200);brk(200);
 cout<<"in a one-horse open sleigh\n";
 d(200);brk(100);d(200);brk(100);d(200);brk(50);e(300);d(350);brk(200);
 cout<<"Hey!\n";
 g(400);brk(200);
 cout<<"JINGLE BELLS JINGLE BELLS..\n";
 e(200);brk(100);e(200);brk(100);e(400);
 brk(300);
 e(200);brk(100);e(200);brk(100);e(400);brk(200);
 cout<<"JINGLE ALL THE WAY..\n";
 e(200);brk(100);g(200);brk(100);c(450);d(200);e(600);brk(200);
 cout<<"oh what fun it is to ride\n";
 f(200);brk(100);f(200);brk(100);f(200);brk(400);f(100);brk(50);f(200);brk(100);
 e(200);brk(100);e(200);brk(200);
 cout<<"in a one-horse open sleigh\n";
 d(100);brk(100);g(200);brk(50);g(200);brk(200);
 e(300);brk(50);d(300);brk(50);c(400);brk(200);
}
void jadoo()
{
clrscr();
cout<<"This is the very famous jadoo tune from the movie\nKoi Mil Gaya.. :-D";
e(600);brk(100);f(600);brk(100);as(600);brk(100);a(1000);brk(500);
e(600);brk(100);f(600);brk(100);a(600);brk(100);g(1000);brk(500);
e(600);brk(100);f(600);brk(100);as(1000);brk(500);
a(600);brk(100);g(600);brk(100);a(1000);brk(200);
}
void jadoot()
{
 y:
 clrscr();
 char r;
 a:
 cout<<"press g\n";
 r=getche();
 if(r=='g')
 e(500);
 else
 {
  cout<<"WRONG KEY";
  goto a;
 }
 b:
 cout<<"press m\n";
 r=getche();
 if(r=='m')
 f(500);
 else
 {
  cout<<"WRONG KEY";
  goto b;
 }
 c:
 cout<<"press N\n";
 r=getche();
 if(r=='N')
 as(500);
 else
 {
  cout<<"WRONG KEY";
  goto c;
 }
 d:
 cout<<"press d\n";
 r=getche();
 if(r=='d')
 a(500);
 else
 {
  cout<<"WRONG KEY";
  goto d;
 }
 e:
 cout<<"press g\n";
 r=getche();
 if(r=='g')
 e(500);
 else
 {
  cout<<"WRONG KEY";
  goto e;
 }
 f:
 cout<<"press m\n";
 r=getche();
 if(r=='m')
 f(500);
 else
 {
  cout<<"WRONG KEY";
  goto f;
 }
 g:
 cout<<"press d\n";
 r=getche();
 if(r=='d')
 a(500);
 else
 {
  cout<<"WRONG KEY";
  goto g;
 }
 h:
 cout<<"press p\n";
 r=getche();
 if(r=='p')
 g(500);
 else
 {
  cout<<"WRONG KEY";
  goto h;
 }
 i:
 cout<<"press g\n";
 r=getche();
 if(r=='g')
 e(500);
 else
 {
  cout<<"WRONG KEY";
  goto i;
 }
 j:
 cout<<"press m\n";
 r=getche();
 if(r=='m')
 f(500);
 else
 {
  cout<<"WRONG KEY";
  goto j;
 }
 k:
 cout<<"press N\n";
 r=getche();
 if(r=='N')
 as(500);
 else
 {
  cout<<"WRONG KEY";
  goto k;
 }
 l:
 cout<<"press d\n";
 r=getche();
 if(r=='d')
 a(500);
 else
 {
  cout<<"WRONG KEY";
  goto l;
 }
 m:
 cout<<"press p\n";
 r=getche();
 if(r=='p')
 g(500);
 else
 {
  cout<<"WRONG KEY";
  goto m;
 }
 n:
 cout<<"press d\n";
 r=getche();
 if(r=='d')
 a(500);
 else
 {
  cout<<"WRONG KEY";
  goto n;
 }
 char x;
 cout<<"DO YOU WANT TO REPLAY THIS TUTORIAL?(y/n)\n";
 cin>>x;
 if(toupper(x)=='Y')
 goto y;
 else
 cout<<"THANK YOU FOR USING THIS TUTORIAL\n";
}
void hbd()
{
 clrscr();
 cout<<"HAPPY BIRTHDAY TO YOU\n";
 c(200); brk(100); c(200); d(500); c(500); f(500); e(800);
 brk(700);
 cout<<"HAPPY BIRTHDAY TO YOU\n";
 c(200); brk(100); c(200); d(500); c(500); g(500); f(800);
 brk(600);
 cout<<"HAPPY BIRTHDAY TO MY DEAR FRIEND\n";
 c(200); brk(100); c(200); c1(500); a(500); g(300); f(200); e(500); d(500);
 brk(700);
 cout<<"HAPPY BIRTHDAY TO YOU.. :-)\n";
 as(200); brk(100); as(200); a(500); f(500); g(500); f(500);
}
void hbdt()
{
 v:
 clrscr();
 char t;
 l1:
 cout<<"\nHAPPY BIRTHDAY TO YOU\n";
 cout<<"press s  s  r  s   m   g\n";
 t=getche(); if(t=='s')c(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='s')c(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='r')d(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='s')c(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='m')f(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='g')e(200); else {cout<<"WRONG KEY";goto l1;}
 l2:
 cout<<"\nHAPPY BIRTHDAY TO YOU\n";
 cout<<"press s  s  r  s   p   m\n";
 t=getche(); if(t=='s')c(200); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='s')c(200); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='r')d(200); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='s')c(200); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='p')g(200); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='m')f(200); else {cout<<"WRONG KEY";goto l2;}
 l3:
 cout<<"\nHAPPY BIRTHDAY TO MY DEAR FRIEND\n";
 cout<<"press s  s  S  d   p   m  g  r\n";
 t=getche(); if(t=='s')c(200); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='s')c(200); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='S')c1(500);else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='d')a(500); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='p')g(300); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='m')f(200); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='g')e(500); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='r')d(500); else {cout<<"WRONG KEY";goto l3;}
 l4:
 cout<<"\nHAPPY BIRTHDAY TO YOU.. :-)\n";
 cout<<"press N  N  d  m   p   m\n";
 t=getche(); if(t=='N')as(200); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='N')as(200); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='d')a(500); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='m')f(500); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='p')g(200); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='m')f(200); else {cout<<"WRONG KEY";goto l4;}
 char l;
 cout<<"\nDO YOU WANT TO PLAY THIS TUTORIAL AGAIN(y/n)\n";
 cin>>l;
 if(toupper(l)=='Y')
 goto v;
 else
 cout<<"THANK YOU FOR USING THIS TUTORIAL\n";
}
void zest()
{
 v:
 clrscr();
 char t;
 l1:
 cout<<"\nZindagi ek safar..\n";
 cout<<"press m  g  r  m  g  r\n";
 t=getche(); if(t=='m')f(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='g')e(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='r')d(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='m')f(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='g')e(200); else {cout<<"WRONG KEY";goto l1;}
 t=getche(); if(t=='r')d(200); else {cout<<"WRONG KEY";goto l1;}
 l2:
 cout<<"\nHai suhanaa..\n";
 cout<<"press r  g  m  p\n";
 t=getche(); if(t=='r')d(200); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='g')e(200); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='m')f(200); else {cout<<"WRONG KEY";goto l2;}
 t=getche(); if(t=='p')g(200); else {cout<<"WRONG KEY";goto l2;}
 l3:
 cout<<"\nYha kal kya ho..\n";
 cout<<"press m  p  d  p  m  p\n";
 t=getche(); if(t=='m')f(200); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='p')g(200); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='d')a(500); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='p')g(500); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='m')f(300); else {cout<<"WRONG KEY";goto l3;}
 t=getche(); if(t=='p')g(200); else {cout<<"WRONG KEY";goto l3;}
 l4:
 cout<<"\nKisne janaa\n";
 cout<<"press m  g  s  r\n";
 t=getche(); if(t=='m')f(200); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='g')e(200); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='s')c(500); else {cout<<"WRONG KEY";goto l4;}
 t=getche(); if(t=='r')d(500); else {cout<<"WRONG KEY";goto l4;}
 char l;
 cout<<"\nDO YOU WANT TO PLAY THIS TUTORIAL AGAIN(y/n)\n";
 cin>>l;
 if(toupper(l)=='Y')
 goto v;
 else
 cout<<"THANK YOU FOR USING THIS TUTORIAL\n";
}

void srgm()
{
 clrscr();
 cout<<"Sa\t";
 c(500);
 cout<<"Re\t";
 d(500);
 cout<<"Ga\t";
 e(500);
 cout<<"Ma\t";
 f(500);
 cout<<"Pa\t";
 g(500);
 cout<<"Dha\t";
 a(500);
 cout<<"Ni\t";
 b(500);
 cout<<"Sa\n";
 c1(500);
 brk(500);
 cout<<"Sa\t";
 c1(500);
 cout<<"Ni\t";
 b(500);
 cout<<"Dha\t";
 a(500);
 cout<<"Pa\t";
 g(500);
 cout<<"Ma\t";
 f(500);
 cout<<"Ga\t";
 e(500);
 cout<<"Re\t";
 d(500);
 cout<<"Sa";
 c(500);
}
void srgmt()
{
 d:
 clrscr();
 char r;
 z:
 cout<<"press s\n";
 r=getche();
 if(r=='s')
 c(500);
 else
 {
  cout<<"WRONG KEY";
  goto z;
 }
 a:
 cout<<"\npress r\n";
 r=getche();
 if(r=='r')
 d(500);
 else
 {
 cout<<"WRONG KEY";
 goto a;
  }
 b:
 cout<<"\npress g\n";
 r=getche();
 if(r=='g')
 e(500);
 else
 {
  cout<<"WRONG KEY";
  goto b;
 }
 c:
 cout<<"\npress m\n";
 r=getche();
 if(r=='m')
 f(500);
 else
 {
  cout<<"WRONG KEY";
  goto c;
 }
 e:
 cout<<"\npress p\n";
 r=getche();
 if(r=='p')
 g(500);
 else
 {
  cout<<"WRONG KEY";
  goto e;
 }
 f:
 cout<<"\npress d\n";
 r=getche();
 if(r=='d')
 a(500);
 else
 {
  cout<<"WRONG KEY";
  goto f;
 }
 g:
 cout<<"\npress n\n";
 r=getche();
 if(r=='n')
 b(500);
 else
 {
  cout<<"WRONG KEY";
  goto g;
 }
 h:
 cout<<"\npress S\n";
 r=getche();
 if(r=='S')
 c1(500);
 else
 {
  cout<<"WRONG KEY\n";
  goto h;
 }
 getch();
 cout<<"\nDO YOU WANT TO USE THIS TUTORIAL AGAIN?(y/n)\n";
 cin>>r;
 if(toupper(r)=='Y')
 goto d;
 else
 cout<<"thank you for using this tutorial!\n";
}
void khnh()
{
clrscr();
cout<<"HAR GHADI BADAL RAHI HAI\n";
g(500);fs(200);g(500);fs(200);g(500);fs(200);g(200);a(200);g(200);fs(200);brk(100);
cout<<"ROOP ZINDAGI\n";
fs(500);e(200);fs(500);e(200);fs(500);brk(600);
cout<<"CHHANV HAI KAHI KAHI HAI\n";
g(500);fs(200);g(500);fs(200);g(500);fs(200);g(200);a(200);g(200);fs(200);brk(100);
cout<<"DHOOP ZINDAGI\n";
fs(500);e(200);fs(500);e(200);fs(200);e(200);d(200);brk(200);
cout<<"HAR PAL YAHA\n";
d(300);e(300);g(200);e(700);brk(800);
cout<<"JEE BHAR JIYO\n";
c(300);d(300);e(200);d(700);brk(800);
cout<<"JO HAI SAMA\n";
d(300);e(300);g(200);e(700);brk(800);
cout<<"KAL HO NA HO\n";
c(300);f(300);e(200);d(700);
}
void lbr()
{
   clrscr();
   int t;
   gotoxy(25,3);
   {printf("WELCOME TO MY MUSIC LIBRARY");}
   gotoxy(15,5);
   {printf("1-happy birthday do you");}
   gotoxy(15,6);
   {printf("2-twinkle twinkle little star");}
   gotoxy(15,7);
   {printf("3-jingle bells");}
   gotoxy(15,8);
   {printf("4-Indian Shuddha Sargam");}
   gotoxy(15,9);
   {printf("5-Jadooo");}
   gotoxy(15,10);
   {printf("6-ALARM");}
   gotoxy(15,11);
   {printf("7-KAL HO NA HO");}
   gotoxy(15,12);
   {printf("8-EXIT THIS MENU\n");}
   cout<<"enter your choice\n";
   cin>>t;
   switch(t)
 {
   case 1:hbd();
   break;
   case 2:ttls();
   break;
   case 3:jbjb();
   break;
   case 4:srgm();
   break;
   case 5:jadoo();
   break;
   case 6:alarm();
   break;
   case 7:khnh();
   break;
   case 8:
   clrscr();
   gotoxy(30,10);
   {printf("\nTHANK YOU FOR USING THIS LIBRARY!!");}
   break;
   default:cout<<"\nWRONG CHOICE\a";
 }
 getch();
}
void tut()
{
   clrscr();
   int t;
   gotoxy(25,3);
   {printf("WELCOME TO MY MUSIC TUTORIAL");}
   gotoxy(15,5);
   {printf("1-happy birthday do you");}
   gotoxy(15,6);
   {printf("2-twinkle twinkle little star");}
   gotoxy(15,7);
   {printf("3-zindgi ek safar hai suhana");}
   gotoxy(15,8);
   {printf("4-Indian Shuddha Sargam");}
   gotoxy(15,9);
   {printf("5-Jadooo");}
   gotoxy(15,11);
   {printf("6-EXIT THIS MENU\n");}
   cout<<"enter your choice\n";
   cin>>t;
   switch(t)
 {
   case 1:hbdt();
   break;
   case 2:ttlst();
   break;
   case 3:zest();
   break;
   case 4:srgmt();
   break;
   case 5:jadoot();
   break;
   case 6:
   clrscr();
   gotoxy(30,10);
   {printf("\nTHANK YOU FOR USING THIS TUTORIAL!!");}
   break;
   default:cout<<"\nWRONG CHOICE\a";
 }
 getch();
}

int main()
{
   char ch,t;
do
 {
   clrscr();
   for(int i=0;i<8;i++)
   {
     gotoxy(1,8+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("W");}
   }
     gotoxy(2,16);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("W");}
  for(i=0;i<5;i++)
   {
     gotoxy(4+i,15-i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("W");}
   }
  for(i=0;i<5;i++)
   {
     gotoxy(8+i,11+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("W");}
   }
  for(i=0;i<8;i++)
   {
     gotoxy(15,15-i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("W");}
   }
     gotoxy(14,16);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("W");}
  for(i=0;i<9;i++)
   {
     gotoxy(18,8+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("E");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(19+i,8);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("E");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(19+i,12);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("E");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(19+i,16);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("E");}
   }
  for(i=0;i<9;i++)
   {
     gotoxy(27,8+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("L");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(27+i,16);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("L");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(36,9+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("C");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(37+i,8);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("C");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(37+i,16);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("C");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(46,9+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("O");}
   }
  for(i=0;i<6;i++)
   {
     gotoxy(47+i,16);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("O");}
   }
  for(i=0;i<6;i++)
   {
     gotoxy(47+i,8);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("O");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(53,9+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("O");}
   }
    for(i=0;i<8;i++)
   {
     gotoxy(55,9+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("M");}
   }
  for(i=0;i<5;i++)
   {
     gotoxy(56+i,8+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("M");}
   }
   for(i=0;i<5;i++)
   {
     gotoxy(60+i,12-i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("M");}
   }
    for(i=0;i<8;i++)
   {
     gotoxy(65,9+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("M");}
   }
    for(i=0;i<9;i++)
   {
     gotoxy(68,8+i);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("E");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(69+i,8);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("E");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(69+i,12);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("E");}
   }
  for(i=0;i<7;i++)
   {
     gotoxy(69+i,16);
     textmode(C80);
     textcolor(GREEN+BLINK);
     {cprintf("E");}
   }
   getch();
   clrscr();
   gotoxy(15,3);
   textcolor(GREEN+BLINK);
   {cprintf("WELCOME TO MY PROGRAM");}
   gotoxy(15,6);
   textcolor(YELLOW);
   {cprintf("PLAY PIANO AND SONG LIBRARY");}
   gotoxy(15,9);
   textcolor(CYAN);
   {cprintf("GUIDED BY- MRS GARIMA JOSHI");}
   gotoxy(15,12);
   textcolor(RED);
   {cprintf("PROGRAMMER-TUSHAR SRIVASTAVA and UDIT SHARMA");}
   gotoxy(26,13);
   textcolor(4);
   {cprintf("IT SECTION 2");}
   getch();
   x:
   clrscr();
   gotoxy(25,3);
   textattr(11);
   {cprintf("MAIN  MENU");}
   gotoxy(15,5);
   textcolor(5);
   {cprintf("press p to PLAY PIANO");}
   gotoxy(15,7);
   textattr(10);
   {cprintf("press t for TUTORIAL");}
   gotoxy(15,9);
   textattr(9);
   {cprintf("press l for song library");}
   gotoxy(15,11);
   textcolor(12);
   {cprintf("press e to EXIT");}
   gotoxy(15,13);
   textattr(WHITE);
   {cprintf("ENTER YOUR CHOICE");}
   ch=getche();
   switch(ch)
{
 case'p':
 case'P':
 piano();
 break;
 case'l':
 case'L':
 lbr();
 break;
 case't':
 case'T':
	 tut();
 break;
 case'e':
 case'E':
 clrscr();
 gotoxy(30,30);
 textcolor(YELLOW);
 {cprintf("\nTHANK YOU FOR USING THIS PROGRAM!!");}
 break;

 default:cout<<"\nWRONG CHOICE\a";
 }// end of switch

if(toupper(ch)!='E')
 {
  textcolor(GREEN);
  cout<<"\nDO YOU WANT TO CONTINUE??(Y/N)";
  cin>>t;
  if(toupper(t)=='Y')
  {goto x;}
  else
  break;
 }
 getch();
 }while(toupper(ch)!='E');
 return 0;
}