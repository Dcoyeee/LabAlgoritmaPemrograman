#include <iostream>
using namespace std;

int main() {
    string namaSiswa;
    double nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;

cout << "Program Hitung Nilai Rata-Rata\n";
    cout << "Nama Siswa: "; 
    getline(cin, namaSiswa);

    cout << "Nilai Pertandingan I: ";
    cin >> nilaiPertandingan1;

    cout << "Nilai Pertandingan II: ";
    cin >> nilaiPertandingan2;

    cout << "Nilai Pertandingan III: ";
    cin >> nilaiPertandingan3;

    int rataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;


    string hadiah;
    
    switch (rataRata) {
    	case 85 ... 100 :
    		hadiah = "Mendapatkan Komputer core i5";
			break;
		case 70 ... 84 :
			hadiah = "Rp. 2.500.000";
			break;
		case 1 ... 69 :
			hadiah = "Hiburan";
			break ;
		default :
			hadiah = "kosong";
			break;
		}
    
	cout << "\nNama Siswa : " << namaSiswa << endl;
	cout << "Nilai Pertandingan 1 adalah = "<<nilaiPertandingan1<< endl;
	cout << "Nilai Pertandingan 2 adalah = "<<nilaiPertandingan2<< endl;
	cout << "Nilai Pertandingan 3 adalah = "<<nilaiPertandingan3<< endl;
	cout << "Siswa yang bernama " << namaSiswa << "\nMemperoleh nilai rata-rata "
		 << rataRata << " dari hasil perlombaan yang diikutinya\n" << 
		 "Hadiah yang didapat adalah Uang sebesar " << hadiah << endl;
 

    return 0;
}

