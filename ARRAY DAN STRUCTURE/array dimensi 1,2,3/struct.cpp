#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

struct lytoid
{
  char id[24];
  char password[24];
  char nickname[24];
}lytoid;
string pilihan;
bool selesai=false;

main()
{
    cout<<"Selamat datang di Lyto Game. Silahkan Isi Form untuk mendaftar"<<endl<<endl;

    for (int i=0;selesai=true;i++)
    {
        cout<<"Masukan ID : ";cin>>lytoid.id;
        cout<<"Masukan Password : ";cin>>lytoid.password;
        cout<<"Masukan Nickname : ";cin>>lytoid.nickname;
        cout<<"Ingin Menginputkan lagi ? Y / N ";cin>>pilihan;
        if (pilihan=="n")
        {
            exit(0);
        }

    }

    getch();
}
