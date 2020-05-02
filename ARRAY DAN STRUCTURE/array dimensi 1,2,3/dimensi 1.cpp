#include <iostream>
#include <conio.h>
using namespace std;
int i,batas,data[15];
main()
{
	cout<<"Masukan batas = ";cin>>batas;
    for (i=1;i<=batas;i++)
    {
        cout<<i<<" : ";cin>>data[i];
    }
    
    cout<<endl;
    for (i=1;i<=batas;i++)
    {
        cout<<data[i]<<" ";
    }
    getch();
}
