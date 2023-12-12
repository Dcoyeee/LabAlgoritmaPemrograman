#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	char kata[20];
	float angka,a,b;
	//clrscr;
	cout<<"Masukan Sembarang Kata Berupa Angka= ";
	cin >> kata;
	angka = atoi(kata);
	a=angka+7;
	cout<<"Hasil Perubahan Ditambah dengan 7= "<<a;
	getchar();
}
