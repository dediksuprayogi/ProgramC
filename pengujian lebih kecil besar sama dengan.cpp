#include <iostream>
#include <conio.h>
using namespace std;
int a,b;
main()
{
	cout<<"Masukkan nilai a = ";cin>>a;
	cout<<"Masukkan nilai b = ";cin>>b;
	if (a==b)
	{
		cout<<"a sama dengan b";
	}
	else if (a>=b)
	{
		cout<<"a lebih besar dari b";
	}
	else if (a<=b)
	{
		cout<<"a lebih kecil dari b";
	}
	getch();
}
