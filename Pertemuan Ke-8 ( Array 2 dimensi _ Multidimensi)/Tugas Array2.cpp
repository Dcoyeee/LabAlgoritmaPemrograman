#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,jumlah,hasil,baris,kolom;
	int m1[10][10];
	int m2[10][10];
	int mp[10][10];
	int mm[10][10];

	cout<<"Penjumlahan, Pengurangan, Perkalian Matriks"<<endl;
	cout<<"Masukan Ukuran Baris dari Matriks: ";
	cin>>baris;
	cout<<"Masukan Ukuran Kolom dari Matriks: ";
	cin>>kolom;

	cout<<"Masukan Data Matriks Pertama"<<endl;
	for (a=0; a<baris; a++){
		for (b=0; b<kolom; b++){
			cout<< "Masukan Nilai dari Data "<<a+1<<" - "<<b+1<<"= ";
			cin>>m1[a][b];
		}
		cout<<endl;
	}
	cout<<"Masukan Data Matriks Kedua"<<endl;
	for (c=0; c<baris; c++){
		for (d=0; d<kolom; d++){
			cout<< "Masukan Nilai dari Data "<<c+1<<" - "<<d+1<<"= ";
			cin>>m2[c][d];
		}
		cout<<endl;
	}
	
	//=================================================================
	
	cout<< "Hasil Matriks Pertama"<<endl;
	for (a=0; a<baris; a++){
		for (b=0; b<kolom; b++){
			cout<<m1[a][b]<<" ";
		}
		cout<<endl;
	}
	
	cout<< "Hasil Matriks Kedua"<<endl;
	for (a=0; a<baris; a++){
		for (b=0; b<kolom; b++){
			cout<<m2[a][b]<<" ";
		}
		cout<<endl;
	}
	
	cout<< "Hasil Penjumlahan Matriks"<<endl;
	for (a=0; a<baris; a++){
		for (b=0; b<kolom; b++){
			mp[a][b] = m1[a][b] + m2[a][b];
			cout<<mp[a][b]<<" ";
		}
		cout<<endl;
	}

	cout<< "Hasil Pengurangan Matriks"<<endl;
	for (a=0; a<baris; a++){
		for (b=0; b<kolom; b++){
			mm[a][b] = m1[a][b] - m2[a][b];
			cout<<mm[a][b]<<" ";
		}
		cout<<endl;
	}
		
	return 0;
}
