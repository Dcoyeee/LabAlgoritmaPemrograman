#include <iostream>
using namespace std;
int main()
{
	int data[3][3]; //deklarasi jenis data dan menulis array 2D berupa 3x3
	
	for (int a=0; a<3; a++){ //looping untuk baris dari array
		for (int b=0; b<3; b++){ //looping untuk kolom dari array
			cout<<"Data Ke - "<<a<<" "<<b<<endl; //print text lokasi array yang mana seperti data[0][1]
			cout<<"Jumlah Penjualan : "; //print text untuk input nilai ke [a] atau baris dan juga [b] atau kolom
			cin>> data[a][b]; //input nilai yang di isi ke array 
		}
	}

	cout<< "Data Penjualan Pertahun"<<endl; //print judul tabel
	cout<< "======================="<<endl; //print garis
	cout<< " 2001 | 2002 | 2003"<<endl; // print tahun untuk menempatkan data/nilai dalam tabel
	cout<< "-----------------------"<<endl; //print garis
	
	for (int a=0; a<3; a++){ //looping untuk baris(a) ke berapanya
		for (int b=0; b<3; b++){ // looping untuk kolom(b) ke berapanya
			cout<<" "<<data[a][b]<<"\t"; //Memanggil nilai dari array yang di maksud lalu \t untuk mensejajarkan text
		}
		cout<<endl; //membuat baris baru setelah looping yang di dalam sudah terpenuhi syaratnya
	}
	return 0; //untuk mengetahui syntax berjalan tanpa error
}	


