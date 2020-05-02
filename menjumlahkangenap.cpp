#include <iostream>
using namespace std;

main()
{
    int batasbilangan;
    int bilangan=0;
    int totaljumlah;
    totaljumlah=bilangan;
    cout<<"Masukkan Jumlah Bilangan Genap : ";cin>>batasbilangan;
    cout<<"Hasil : ";
    for(int a=1; a<=batasbilangan; a++)
    {
        bilangan=bilangan+2;
        totaljumlah=totaljumlah+bilangan;
        cout<<bilangan<<" ";
    }
    cout<<" = " <<totaljumlah;
}
