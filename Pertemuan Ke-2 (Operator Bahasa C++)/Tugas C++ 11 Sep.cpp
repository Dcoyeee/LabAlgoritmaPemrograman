#include <iostream>
using namespace std;
int main()
{
	char x[30]; char y[30]; char z[50];
	cout <<"Masukan Nama Anda: "; 
	cin >>x;
	cout <<"Masukan NPM Anda: "; 
	cin >>y;
	cout <<"Masukan Alamat Anda: "; 
	cin >>z;
	
	cout << "\nNama Anda Adalah: " << x <<endl;
	cout << "NPM Anda Adalah: " << y <<endl;
	cout << "Alamat Anda Adalah: " << z <<endl;
	return 0;
}
// Atau Pake code ini untuk endline
//	cout << "\nNama Anda Adalah: " << x;
//	cout << "\nNPM Anda Adalah: " << y;
//	cout << "\nAlamat Anda Adalah: " << z;
