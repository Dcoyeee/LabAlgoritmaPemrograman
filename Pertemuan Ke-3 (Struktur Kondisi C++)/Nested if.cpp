#include <iostream>
using namespace std;

int main() {
    string namaSiswa;
    double nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;

  cout << "Program Hitung Nilai Rata-Rata\n";
    cout << "Nama Siswa: ";
    cin >> namaSiswa;

    cout << "Nilai Pertandingan I: "; 
    cin >> nilaiPertandingan1;

    cout << "Nilai Pertandingan II: ";
    cin >> nilaiPertandingan2;

    cout << "Nilai Pertandingan III: ";
    cin >> nilaiPertandingan3;

    double rataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;

// Nested If, menghitung rata-rata
if (rataRata > 0) {
	if (rataRata >= 85) {
		cout << "Siswa " << namaSiswa <<"Mendapatkan Hadiah Komputer core i5";
	} else if (rataRata >= 70) {
		cout << "Siswa yang bernama " << namaSiswa << "\nMemperoleh nilai rata-rata "
		 << rataRata << " dari hasil perlombaan yang diikutinya\n" <<
		  "Hadiah yang didapat adalah Uang sebesar Rp. 2.500.000";
	} else {
		cout << "Siswa " << namaSiswa << "Mendapatkan Hadiah Hiburan";
	}
} else {
	cout << "Siswa" << namaSiswa << "Masukkan nilai yang valid";
}

    return 0;
}

