#include <iostream>
	using namespace std;

int main(){
	// Luas Lingkaran
	double phi = 3.14, r, L; // r = Jari-Jari, L = Luas
	
	cout<<"Menghitung Luas Lingkaran\n";
	cout<<"No. 1";
	cout<<"\nMasukkan jari-jari untuk lingkaran : ";
	cin>>r;
	
	cout<<"Diketahui : \n";
	cout<<"r = "<<r<<"cm";
	cout<<"\nRumus : L = 3.14*"<<r<<"*"<<r;
	L = phi*r*r;
	cout<<"\nLuas lingkaran = "<<L<<"cm";
	
	cout<<"\n \nNo. 2";
	cout<<"\nMasukkan jari-jari untuk lingkaran : ";
	cin>>r;
	
	cout<<"Diketahui : \n";
	cout<<"r = "<<r<<"cm";
	cout<<"\nRumus : L = 3.14*"<<r<<"*"<<r;
	L = phi*r*r;
	cout<<"\nLuas lingkaran = "<<L<<"cm";
	 
	cout<<"\n \n=================================================\n \n";
	
	double t, V; // t = Tinggi, V = Volume
	cout<<"Menghitung Volume Tabung";
	
	cout<<"\nNo. 1";
	cout<<"\nMasukkan Jari-Jari Untuk Tabung : ";
	cin>>r;
	cout<<"Masukkan Tinggi Untuk Tabung : ";
	cin>>t;
	
	cout<<"Diketahui : \n";
	cout<<"r = "<<r<<"cm, t = "<<t;
	cout<<"\nRumus : V = 3.14*"<<r<<""<<r<<""<<t;
	V = phi*r*r*t;
	cout<<"\nVolume Tabung = "<<V<<"cm";
	
	cout<<"\n \nNo. 2";
	cout<<"\nMasukkan Jari-Jari Untuk Tabung : ";
	cin>>r;
	cout<<"Masukkan Tinggi Untuk Tabung : ";
	cin>>t;
	
	cout<<"Diketahui : \n";
	cout<<"r = "<<r<<"cm, t = "<<t<<"cm";
	cout<<"\nRumus : V = 3.14*"<<r<<""<<r<<""<<t;
	V = phi*r*r*t;
	cout<<"\nVolume Tabung = "<<V<<"cm";	
	 
	return 0;
	
}

