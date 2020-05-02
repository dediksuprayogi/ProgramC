#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int nilai[5],i;
    cout<<" Jumlah Nilai = ";cin>>i;
    cout<<endl;
    for(int a=1;a<=i;a++){
    cout<<" Nilai = ";cin>>nilai[a];
    }
    cout<<endl;
    for(int a=1;a<=i;a++){
         cout<<"Baris ke "<<a<<" Adalah = "<<nilai[a]<<" "<<endl;
    }
    getch();
}
