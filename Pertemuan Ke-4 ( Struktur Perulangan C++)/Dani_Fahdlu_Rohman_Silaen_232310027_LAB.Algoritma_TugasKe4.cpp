#include <iostream>
using namespace std;
int main () {

	cout << "Pengulangan " << endl ;
	
	for ( int x = 1; x <= 5 ; x++ ){
		for ( int y = 1 ; y <= 5 ; y++){
			cout << x;
		}
		cout << endl ;
		
			int angka ;
	int hasil = 1 ;
	}
		cout << endl ;
		
		cout << "Perulangan Meningkat" << endl ;
	for ( int x = 1; x <= 10; x++  ) {
		cout << x << endl ;
		
	}
	cout << endl ;
	cout << "Perulangan Menurun " << endl ;

	for ( int x = 10 ; x >= 1 ; x-- ) {
		cout << x << endl ;
	}
	
	cout << endl ;
	cout << "Perulangan Ganjil " << endl ;
	
	for ( int x = 1; x <= 10 ; x = x + 2 ) {
		cout << x << endl ;
	}
	
	cout << endl ;
	cout << "Perulangan Genap " << endl ;
	
	for ( int x = 2 ; x <=10 ; x = x + 2 ) {
		cout << x << endl ;
	}
	
	cout << endl ;
	
	int angka ;
	int hasil = 1 ;
	
	cout << endl;
	cout << "Masukan Suatu Bilangan: " ;
		cin >> angka ;
		
	
	if ( angka < 3 ) {
		hasil = 0;
	}	 else {
		
		for ( int x = 2 ; x * x <= angka ; ++x) {
			if ( angka % x == 0 ) {
				hasil = 0;
				break ;
			}
		}
	}
	
	if ( hasil == 1 ) {
		
		cout << angka << " '\'Termasuk Bilangan PRIMA." << endl ; 
		
	} else {
		
		cout << angka << " Bukan Termasuk Bilangan PRIMA." << endl ;
		
	}
	
	cout << endl ;

	int kolom, bintang;
cout << "Masukan Jumlah Kolom: " ;
	cin >> kolom ;
	bintang = kolom / 2 ;
	
	for ( int x = 1; x<= bintang ; x++) {
		for ( int y = 1 ; y <= bintang ; y++) {
			if ( y - 1 <= bintang - x ) {
				cout << "*  " ;
			} else {
				cout << "   " ;
			}
		}
		for ( int y = 1 ; y <= bintang ; y++) {
			if ( y >= x ) {
				cout << "*  " ;
			} else {
				cout << "   " ;
			}
		}
		cout << endl;
	}
	for (int x= 1; x <= bintang ; x++) {
		for ( int y = 1 ; y <= bintang ; y++) { 
			if ( y >= x + 1) {
				cout << "   " ;
			} else {
				cout << "*  " ;
			}
		}
		for (int y= 1 ; y <= bintang ; y++) {
			if ( y <= bintang - x ) {
				cout << "   " ;
			}else { 
				cout << "*  " ;
			}
		}
	cout << endl ;
	
	
	} 
	
	
	return 0;
}

