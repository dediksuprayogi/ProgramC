#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, n1, n2, batas;
	n1=0;
	n2=1;
	cout<<"Masukkan Batas Deret Fibonacci = ";cin>>batas;
	for(int a=0;a<batas;a++)
    {
        cout<<n1<<" ";
        n=n1+n2;
        n1=n2;
        n2=n;
        cout<<batas;
	}
}
