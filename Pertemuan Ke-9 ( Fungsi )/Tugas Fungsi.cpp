#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,b;
	a=5;
	b=9;
	
	cout<<"Nilai Sebelum Fungsi Digunakan ";
	cout<<"\na="<<a<<endl;
	cout<<"b="<<b<<endl;
	
	tambah(a,b);
	
	cout<<"\nNilai Setelah Fungsi Digunakan";
	cout<<"\na="<<a<<endl;
	cout<<"b="<<b<<endl;
	getche();
	return 0;
}

void tambah(int m, int n){
	m+=5;
	n+=7;
	cout<<"\nNilai di Dalam Fungsi Tambah(a,b)";
	cout<<"\nm="<<m<<endl;
	cout<<"n="<<n<<endl;
	cout<<endl;
}


