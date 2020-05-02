#include <iostream>
#include <conio.h>
using namespace std;
int i=1,j=1,btsb,btsk,data[2][10];
main()
{
	cout<<"bts baris : ";cin>>btsb;
	cout<<"bts kolom : ";cin>>btsk;
    do
    {
        for (i=1;i<=btsk;i++)
        {
            cin>>data[j][i];
        }
        cout<<endl;
        j++;
    }while(j<=btsb);
    
    cout<<endl;
    do
    {
        for (i=1;i<=btsk;i++)
        {
            cout<<data[j][i];
        }
        cout<<endl;
        j++;
    }while(j<=btsb);

    getch();
}
