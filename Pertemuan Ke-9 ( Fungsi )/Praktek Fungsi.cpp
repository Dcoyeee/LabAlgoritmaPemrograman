#include <iostream>
using namespace std;
//sub program
//prosedur:Tidak ada nilai yang kembali karena hanya runtutan prosesnya
//Fungsi:Tanpa nilai yang kembali

//prosedur
void siswa(){
	string nama = "Alex";
	cout<< nama << endl;
}

//fungsi
string siswi(){
	string nama = "Alexa";
	return nama;
}

//prosedur adalah kode di luar int main, dan nanti bisa dipanggil isi kode nya lewat int main

					//pemanggilan prosedur
int main(){				
	siswa();
}

					//pemanggilan fungsi
int main(){					
	cout << siswi() << endl;
}

//prosedur
void siswa(){
	string nama = "Alex";
	string jk = "Laki-Laki";
	cout << nama << "Adalah Seorang" << jk << endl;
}

//fungsi
string siswi(){
	string nama = "Alexa";
	string jk = "Perempuan";
	return (nama+"Adalah Seseorang"+jk);
}

					//pemanggilan prosedur
int main(){				
	siswa();
}

					//pemanggilan fungsi
int main(){					
	cout << siswi() << endl;
}





//parameter
string siswa (string nama, string kelas){
	return (nama," Adalah Siswa Kelas ", kelas);
}

int main(){
	string nama , kelas;
	cout<< "Nama : "; getline (cin,nama);
	cout<< "Kelas : "; getline (cin,kelas);
	cout<< siswa (nama,kelas);
	
	cout<< siswa ("Budi","X");
}
