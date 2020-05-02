#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int top,i;
char pilihan,huruf,e;
char stack[10];
void GERAK();

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void clrscr()
{
    system("cls");
}

void pushanim()
{
 for(i=0;i<=17; i++)
 {
  gotoxy(22+i,7);cout<<" ";
  gotoxy(23+i,7); cout<<huruf; GERAK();

 }
 for(i=1;i<=(14-top);i++)
 {
  GERAK();
  gotoxy(40,6+i); cout<<" ";
  gotoxy(40,7+i); cout<<huruf;
 }
}

void popanim(char huruf)
{
 for(i=1;i<=(14-top);i++)
 {
  GERAK();
  gotoxy(40,22-i-top); cout<<" ";
  gotoxy(40,21-i-top); cout<<huruf;
 }
 for(i=1;i<=19;i++)
 {
  GERAK();
  gotoxy(38+i,7); cout<<" ";
  gotoxy(39+i,7); cout<<huruf; GERAK();
 }
 gotoxy(58,7);cout<<" ";
}

void push(char e)
{
 top=top+1;
 stack[top]=e;
 pushanim();
}
void pop(char e)
{
 if(top !=0)
 {
  e=stack[top]; popanim(e);
  top=top-1;
 }
 else
 {
  gotoxy(1,7); cout<<"stack telah kosong"<<endl;
  gotoxy(1,7);
 }
}

int main()
{
  clrscr();
  cout<<"ANIMASI STACK"<<endl;
  cout<<"----------------"<<endl;
  cout<<"1.Push"<<endl;
  cout<<"2.Pop"<<endl;
  cout<<"3.quit"<<endl;
  gotoxy(59,6); cout<<"=";
  gotoxy(59,8); cout<<"=";
  gotoxy(37,9); cout<<"II   II";
  for(i=1;i<=11;i++)
  {
   gotoxy(38,10+i);
   if(i==11)
    cout<<"I___I";
   else
   cout<<"I   I";
  }
   top=0;
   do
   {
   input:
   gotoxy(1,5);
   cout<<"masukkan pilihan anda[1/2/3] : ";
   cin>>pilihan;
   if(pilihan=='3')
    break;
   else if(pilihan=='1')
     {
       if(top != 10)
       {
        gotoxy(1,7); cout<<"masukkan suatu huruf : ";
        cin>>huruf;
            push(huruf);
        gotoxy(1,7); cout<<"                      ";
       }
       else
       {
        gotoxy(1,7); cout<<"stack penuh";
            getch();
        gotoxy(1,7); cout<<" ";
       }
     }
   else if(pilihan=='2')
        pop(huruf);
   else
    goto input;
  }while(1);

 getch();
}

void GERAK()
{
 for(int y=1;y<20;y++)
 for(int x=1;x<100;x++)
 for(int p=1;p<100;p++)
 cout<<"";
}
