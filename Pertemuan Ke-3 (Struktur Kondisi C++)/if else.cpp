#include <iostream>
using namespace std;

int main() {
    string namaSiswa;
    double nilai1, nilai2, nilai3;
    double rataRata;

    // Meminta input dari pengguna
    
    cout << "Program Hitung Nilai Rata-Rata\n";
    
    cout << "Nama Siswa: ";
    getline(cin, namaSiswa);


    cout << "Nilai Pertandingan I: ";
    cin >> nilai1;

    cout << "Nilai Pertandingan II: ";
    cin >> nilai2;

    cout << "Nilai Pertandingan III: ";
    cin >> nilai3;

    // Menghitung nilai rata-rata
    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    // Menentukan hadiah berdasarkan nilai rata-rata
    if (rataRata >= 80) {
        cout << "Siswa yang bernama " << namaSiswa << "\nMemperoleh nilai rata-rata "
		 << rataRata << " dari hasil perlombaan yang diikutinya" <<
		 "\nHadiah yang didapat adalah uang sebesar Rp. 2.500.000" << endl;
    }	 else {
        cout << "Siswa " << namaSiswa << " tidak mendapatkan hadiah." << endl;
    }

    return 0;
}

