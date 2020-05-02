#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int x,n,data[30][30][30];
    cout<<" Masukkan Jumlah siswa : ";cin>>n;
    cout<<" Masukkan Jumlah Nilai : ";cin>>x;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
        if(k==1){
        cout<<"============================= "<<endl;
        cout<<" Nomer Absen  : ";cin>>data[i][0][k];
        cout<<"============================= "<<endl;
            }else if (k==2){
            for(int j=1;j<=x;j++){
            cout<<" Nilai Quiz ke "<<j<<" : ";cin>>data[i][j][k];
            }
           }
        }
}
    cout<<endl;

    cout<<"==================================== "<<endl;
    cout<<" REKAP NILAI : "<<endl;
    cout<<"==================================== ";
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(k==1){
            cout<<"\n No.ABSEN "<<data[i][0][k]<<"  ||  ";
            }else if (k==2){
                for(int j=1;j<=x;j++){
                cout<<data[i][j][k]<<" | ";
                }
            }
        }
    }
    getch();
}
