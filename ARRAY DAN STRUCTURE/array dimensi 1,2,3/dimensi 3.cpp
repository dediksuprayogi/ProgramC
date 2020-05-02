#include <iostream>
#include <conio.h>
using namespace std;
int i,j,k,data[2][2][5]={{{1,2,1,2,1},{1,2,3,4,5}},{{3,4,5,6,7},{1,2,3,4,5}}};
main()
{
    do
    {
        for (i=0;i<=2;i++)
        {
            for (k=0;k<=4;k++)
            {
                cout<<data[j][i][k];
            }
            cout<<" ";
        }
        cout<<endl;
        j++;
    }while(j<=1);

    getch();
}
