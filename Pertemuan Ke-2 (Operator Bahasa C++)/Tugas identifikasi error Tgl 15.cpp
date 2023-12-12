#include <iostream>
using namespace std;
int main(){
	float x,y,tambah,kurang,kali,bagi;
	cout <<"Masukan Bilangan kesatu; ";
	cin>>x;
	cout <<"Masukan Bilangan kedua; ";
	cin>>y;
	tambah=x+y;
	kurang=x-y;
	kali=x*y;
	bagi=x/y;
	cout << "Jadi Hasil Penjumlahannya adalah: " <<tambah<<endl;
	cout << "Jadi Hasil Pengurangannya adalah: " <<kurang<<endl;
	cout << "Jadi Hasil Perkaliannya adalah: " <<kali<<endl;
	cout << "Jadi Hasil Pembagiannya adalah: " <<bagi<<endl;
	
	return 0;
}

