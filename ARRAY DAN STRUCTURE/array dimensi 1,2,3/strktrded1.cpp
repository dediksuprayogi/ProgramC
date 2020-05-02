#include <iostream>
#include <conio.h>
using namespace std;
int bts,n1,n2;
int nilai[2]={n1,n2};
int main ()
{
    cout<<"Masukkan Jumlah Variabel Pengujian : ";cin>>bts;
	for(int a=1;a<=bts;a++){
	cout<<"Masukkan Nilai Pertama = ";cin>>n1;
	cout<<"Masukkan Nilai Kedua   = ";cin>>n2;
	}
	for(int a=1;a<=bts;a++){
	if (n1==n2)
	{
		cout<<"Nilai Pertama Sama Dengan Nilai Kedua";
	}
	else if (n1>=n2)
	{
		cout<<"Nilai Pertama Lebih Besar Dari Nilai Kedua ";
	}
	else if (n1<=n2)
	{
		cout<<"Nilai Pertama Lebih Kecil Dari Nilai Kedua";
	}
	cout<<endl;
	}

getch();

}
