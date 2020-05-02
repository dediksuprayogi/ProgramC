#include <iostream>
using namespace std;

main()
{
    int batasbilangan;
    int bilangan=1;
    int totaljumlah;
    totaljumlah=bilangan;
    cout<<"Masukkan Jumlah Bilangan Ganjil : ";cin>>batasbilangan;
    cout<<"Hasil : ";
       cout<<bilangan<<" ";
    for(int a=1; a<=batasbilangan; a++)
    {
        bilangan=bilangan+2;
        totaljumlah=totaljumlah+bilangan;
        cout<<bilangan<<" ";
    }
    cout<<" = " <<totaljumlah;
}
