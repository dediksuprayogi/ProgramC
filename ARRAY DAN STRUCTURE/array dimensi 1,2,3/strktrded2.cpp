#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int i=0,j=0,hari,ruang;
    cout<<"Banyak Hari : ";cin>>hari;
    cout<<"Banyak Ruang : ";cin>>ruang;
    cout<<endl;

    float jumlah [100][50];
    while(i<hari){
        cout<<"Pendaftar Hari ke-"<<i+1<<endl;
        for(j=0;j<ruang;j++){
            cout<<"Banyak pendaftar ruang " <<j+1<<" = " ;
            cin>>jumlah[i][j];
        }
        cout<<endl;
    i++;
    }

        for(int j=0;j<ruang;j++){
                int k=0;
                for(int i=0;i<hari;i++){
                k=k+jumlah[i][j];
                }
                cout<<"Total Pendaftaran Ruang-"<<(j+1) <<" = "<<k<<endl;
            }
            cout<<endl;
            for(int i=0;i<hari;i++){
                    int h=0;
                    for(int j=0;j<ruang;j++){
                        h=h+jumlah[i][j];
                    }
                cout<<"Total Pendaftaran Hari Ke-"<<(i+1) <<" = "<<h<<endl;
            }
            cout<<endl;
            int jml;
            for(int i=0;i<hari;i++){
                    for(int j=0;j<ruang;j++){
                        jml=jml+jumlah[i][j];
                    }
            }
            cout <<"Jumlah Total Pendaftar = "<<jml;
            cout<<endl;
    getch();
}
