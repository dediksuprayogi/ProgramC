#include <iostream>
#include <conio.h>
using namespace std;
int a,b,c,d,e,f,g,h,i;
int main()
{
	int nilai[9]={a,b,c,d,e,f,g,h,i};
	int determinan;
	cout<<"Masukkan Nilai a = ";cin>>a;
	cout<<"Masukkan Nilai b = ";cin>>b;
	cout<<"Masukkan Nilai c = ";cin>>c;
	cout<<"Masukkan Nilai d = ";cin>>d;
	cout<<"masukkan nilai e = ";cin>>e;
	cout<<"masukkan nilai f = ";cin>>f;
	cout<<"masukkan nilai g = ";cin>>g;
	cout<<"masukkan nilai h = ";cin>>h;
	cout<<"masukkan nilai i = ";cin>>i;
	determinan = (a*e*i)+(d*h*c)+(g*b*f)-(d*b*i)-(a*h*f)-(g*e*c);
	cout<<"Hasil determinan dari matriks ordo 3x3 diatas = "<<determinan<<endl;
	return 0;
	getch();
}
