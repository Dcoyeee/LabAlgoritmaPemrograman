#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
	char a1[20];
	char a2[20];
	//clrscr;
	cout<<"Masukan kata - 1= ";
	cin>>a1;
	cout<<"masukan kata - 2= ";
	cin>>a2;
	
	strcat(a1,a2);
	cout<<"Hasil Penggabungannya "<<a1;
	getchar();
}
