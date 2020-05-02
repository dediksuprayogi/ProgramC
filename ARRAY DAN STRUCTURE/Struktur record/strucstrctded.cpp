#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;

struct bio
{
    int tanggal,bulan,tahun;
};
 struct pasien
                {
                    bio tgl_pasien;
                    char nama[100];
                    char alamat[50];
                    char jkel[10];
                    int umur;
                }
                data[20];
main()
{
    int bts;
    cout<<"=============================="<<endl;
    cout<<" NAMA : Dedik Suprayogi  "<<endl;
    cout<<" NPM  : 06512            "<<endl;
    cout<<"=============================="<<endl;
    cout<<" Masukkan Jumlah Pasien : ";cin>>bts;
    for(int a=1;a<=bts;a++){
                cout<<" ======================================================"<<endl;
                cout<<"\t IDENTITAS PASIEN \n";
                cout<<" ======================================================"<<endl;
                cout<<" Tanggal Pasien  : "; cin>>data[a].tgl_pasien.tanggal;
                cout<<" Bulan Pasien    : "; cin>>data[a].tgl_pasien.bulan;
                cout<<" Tahun Pasien    : "; cin>>data[a].tgl_pasien.tahun;
                cout<<" Nama Pasien     : "; gets(data[a].nama);
                cout<<" Alamat          : "; gets(data[a].alamat);
                cout<<" Jenis Kelamin   : "; cin>>data[a].jkel;
                cout<<" Umur            : "; cin>>data[a].umur;
    }
                cout<<endl;
                getch();
                cout<<" ======================================================"<<endl;
                cout<<"\t DAFTAR IDENTITAS PASIEN \n";
                cout<<" ======================================================"<<endl;
     for(int b=1;b<=bts;b++){
                cout<<" Pasien Masuk      : "<<data[b].tgl_pasien.tanggal<<"-"<<data[b].tgl_pasien.bulan<<"-"<<data[b].tgl_pasien.tahun<<endl;
                cout<<" Nama Pasien       : "<<data[b].nama<<endl;
                cout<<" Alamat            : "<<data[b].alamat<<endl;
                cout<<" Jenis Kelamin     : "<<data[b].jkel<<endl;
                cout<<" Umur              : "<<data[b].umur<<" tahun "<<endl;
     cout<<endl;
     }
     getch();
}
