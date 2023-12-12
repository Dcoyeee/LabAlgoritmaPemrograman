//// Program untuk menyimpan dan menampilkan data penjualan barang
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int data[3][3]; // Matriks 2D untuk menyimpan data penjualan
//    for (int a=0; a<3; a++) { // Perulangan untuk mengisi data penjualan
//        for (int b=0; b<3; b++) {
//            cout << "Data Ke - " << a << " " << b << endl; // Menampilkan pesan untuk mengisi data ke-a dan ke-b
//            cout << "Jumlah Penjualan : ";
//            cin >> data[a][b]; // Mengambil input jumlah penjualan
//        }
//    }
//    
//    cout << endl;
//    cout << "HASIL PENJUALAN BARANG" << endl; // Menampilkan judul hasil penjualan barang
//    cout << "================================================" << endl; // Menampilkan garis pemisah tabel
//    cout << " 2001          2002            2003            |" << endl; // Menampilkan header kolom tahun
//    cout << "================================================" << endl; // Menampilkan garis pemisah tabel
//	
//    // Perulangan untuk menampilkan data penjualan
//    for (int a=0; a<3; a++) {
//        for (int b=0; b<3; b++) {
//            cout << data[a][b] << "\t\t"; // Menampilkan data pada posisi a, b
//        }
//        cout << endl; // Pindah baris setelah setiap baris data
//    }
//    
//    return 0;
//}
//
//
//
//  TUGAS RUMAH
//
// NO 1 
// #include <iostream>
//using namespace std;
//
//int main() {
//	int baris, kolom, b2, k2;
//	
//	cout << "Masukkan Panjang Baris = ";
//	cin >> baris;
//	b2 = baris; 
//	cout << "Masukkan Panjang Kolom = ";
//	cin >> kolom;
//	k2 = kolom;
//	
//	int matriks1[baris][kolom];
//	int matriks2[baris][kolom];
//	
//	cout << endl;
//	//Input Data Matriks 1
//	cout << "Matriks A"<<endl;
//	for(int i = 0; i < baris; i++) {
//		for(int j = 0; j < kolom; j++) {
//			cout << "Masukkan Nilai Baris "<<i<<" Kolom "<<j<<" = ";
//			cin >> matriks1[i][j];
//		}
//		cout << endl;
//	}
//	
//	//Input Data Matriks 2
//	cout << "Matriks B"<<endl;
//	for(int i = 0; i < baris; i++) {
//		for(int j = 0; j < kolom; j++) {
//			cout << "Masukkan Nilai Baris "<<i<<" Kolom "<<j<<" = ";
//			cin >> matriks2[i][j];
//		}
//		cout << endl;
//	}
////Cetak Matriks 1
//	cout << "Matriks A"<<endl;
//	for(int i = 0; i < baris; i++) {
//		for(int j = 0; j < kolom; j++) {
//			cout << matriks1[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//	//Cetak Matriks 2
//	cout << "Matriks B"<<endl;
//	for(int i = 0; i < baris; i++) {
//		for(int j = 0; j < kolom; j++) {
//			cout << matriks2[i][j] << " ";
//		}
//		cout << endl;
//	}
////Penjumlahan Matriks
//	cout << "Penjumlahan Matriks A + B"<<endl;
//	for(int i = 0; i < baris; i++) {
//		for(int j = 0; j < kolom; j++) {
//			cout << matriks1[i][j] << " + " << matriks2[i][j]<< " = " << matriks1[i][j]+matriks2[i][j]<<" \t";
//		}
//		cout << endl;
//	}
//	
//	cout << endl;
//	
//	//Pengurangan Matriks
//	cout << "Pengurangan Matriks A - B"<<endl;
//	for(int i = 0; i < baris; i++) {
//		for(int j = 0; j < kolom; j++) {
//			cout << matriks1[i][j] << " - " << matriks2[i][j]<< " = " << matriks1[i][j]-matriks2[i][j]<<" \t";
//		}
//		cout << endl;
//	}
//	
//	int kali[baris][kolom];
//	 for(int i = 0; i < baris; ++i) {
//        for(int j = 0; j < k2; ++j)
//        {
//            kali[i][j]=0;
//        }
//    }
//    
//	cout << endl;
//	
//	//Perkalian Matriks
//	cout << "Perkalian Matriks A * B"<<endl;
//	for(int i = 0; i < baris; ++i) {
//        for(int j = 0; j < k2; ++j) {
//            for(int k = 0; k < kolom; ++k)
//            {
//            	cout << matriks1[i][k] << " * " << matriks2[k][j] << " + ";
//                kali[i][j] += matriks1[i][k] * matriks2[k][j];
//            }
//        }
//        cout << endl;
//    }
//    
//    //Menampilkan Hasil Perkalian
//    cout << "Hasil Perkalian Matriks A * B"<<endl;
//    for(int i = 0; i < baris; ++i)
//    for(int j = 0; j < k2; ++j)
//    {
//        cout << " " << kali[i][j];
//        if(j == k2-1)
//            cout << endl;
//    }
//	
//	
//	
//	return 0;
//}
//
//
// NO 2 
// #include <iostream>
//using namespace std;
//
//int main() {
//	cout << "--------------------------"<<endl;
//	cout << "GEROBAK FRIED CHICKEN"<<endl;
//	cout << "--------------------------"<<endl;
//	cout << "Kode \tJenis \tHarga" << endl;
//	cout << "--------------------------"<<endl;
//	cout << "D \tDada \tRp.2500"<<endl;
//	cout << "P \tPaha \tRp.2000"<<endl;
//	cout << "S \tSayap \tRp.1500"<<endl;
//	cout << "--------------------------"<<endl;
//	
//	int qtyJenis;
//	
//	cout << "Banyak Jenis : ";
//	cin >> qtyJenis;
//	
//	char kode[qtyJenis];
//	int qtyPotong[qtyJenis];
//	
//	for(int i = 0; i < qtyJenis; i++) {
//		cout << "Jenis ke-"<<i+1<<endl;
//		cout << "Jenis Potong (D/P/S) : ";
//		cin >> kode[i];
//		cout << "Banyak Potong : ";
//		cin >> qtyPotong[i];
//		cout << endl;
//	}
//	
//	cout << "\t\t\tGEROBAK FRIED CHICKEN"<<endl;
//	cout << "------------------------------------------------------------------------------"<<endl;
//	cout << "No. \t|Jenis Potong| \t|Harga Satuan| \t|Banyak Beli| \t|Jumlah Harga|"<<endl;
//	cout << "------------------------------------------------------------------------------"<<endl;
//	int harga, jmlBayar = 0; string jenis;
//		for(int i = 0; i < qtyJenis; i++) {
//			cout <<i+1<<"    \t ";
//				if(kode[i] == 'D' || kode[i] == 'd') {
//					jenis = "Dada"; harga = 2500;
//				} else if (kode[i] == 'P' || kode[i] == 'p') {
//					jenis = "Paha"; harga = 2000;
//				} else if (kode[i] == 'S' || kode[i] == 's') {
//					jenis = "Sayap"; harga = 1500;
//				} else {
//					jenis = "INVALID"; harga = 0;
//				}
//			cout << jenis << " \t\t Rp. " << harga << " \t\t " << qtyPotong[i] << " \t Rp. " << harga*qtyPotong[i];
//			jmlBayar += harga*qtyPotong[i];
//			cout << endl;
//		}
//	cout << "------------------------------------------------------------------------------"<<endl;
//	cout << "\t\t\t\t\t Jumlah Bayar \t: Rp. " << jmlBayar << endl;
//	cout << "\t\t\t\t\t PPN 10% \t: Rp. " << jmlBayar*0.1 << endl;
//	cout << "\t\t\t\t\t Total Bayar \t: Rp. " << jmlBayar+(jmlBayar*0.1)<<endl;
//	cout << "------------------------------------------------------------------------------"<<endl;
//	
//	
//	return 0;
//}
//

