/*
// ---------------------------------------------------CODE 1 -------------------------------------------
#include <iostream>
using namespace std;

int main ()
{
	struct mahasiswa {
		char nim [9];
		char nama [15];
		float nilai;
		
	};
	mahasiswa mahasiswa;
	//clrscr;
	cout <<"Masukkan NIM : ";
	cin >> mahasiswa.nim;
	cout << "Masukkan Nama :";
	cin >> mahasiswa.nama;
	cout << "Masukkan nilai akhir : ";
	cin >> mahasiswa.nilai;
	cout <<"\nData yang diinput adalah : \n\n ";
	cout << "NIM : " << mahasiswa.nim <<endl;
	cout << "Nama : " << mahasiswa.nama <<endl;
	cout << "Nilai : " << mahasiswa.nilai <<endl;
	getchar();
}



// ----------------------------------------CODE 2 --------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

struct siswa {
	int no_induk;
	string nama;
	float nilai;
	
};

int main ()
{
	siswa Arkan, Lukas;
	Arkan.no_induk = 1;
	Arkan.nama = "Arkan Januar";
	Arkan.nilai = 75.5;
	Lukas.no_induk = 2;
	Lukas.nama = "Lukas Laksono";
	Lukas.nilai = 89.9;
	
	cout << Arkan.nama <<" dengan nomor induk " << Arkan.no_induk << " mendapatkan nilai " << Arkan.nilai <<endl;
	cout << Lukas.nama <<" dengan nomor induk "<< Lukas.no_induk << " mendapatkan nilai " << Lukas.nilai <<endl;
	 return 0;
}



//--------------------------------------------------CODE 3 ------------------------------------------
#include <iostream>
#include <string>
using namespace std;

struct siswa {
	int no_induk;
	string nama;
	float nilai;	
};

int main ()
{
	siswa Jery = {1, "Jery Januar", 85.5};
	siswa tono = {2, "Tono Laksono", 89.9};
	cout << Jery.nama <<" mendapatkan nilai "<<Jery.nilai <<endl;
	cout << tono.nama <<" mendapatkan nilai "<<tono.nilai <<endl;
	return 0;
}


//-----------------------------------------------------CODE 4----------------------------------------------------------
#include <iostream>
using namespace std;

int main ()
{
	struct dtmhs {
		char nim [9];
		char nama [15];
	};
	
	struct dtnil {
		float nil1;
		float nil2;
	};
	
	struct {
		struct dtmhs mhs;
		struct dtnil nil;
	} nilai;
	
	cout << "Masukkan NIM : "; 
	cin >> nilai.mhs.nim;
	cout << "Masukkan nama : "; 
	cin >> nilai.mhs.nama;
	cout << "Masukkan nilai UTS : "; 
	cin >> nilai.nil.nil1;
	cout << "Masukkan nilai UAS :"; 
	cin >> nilai.nil.nil2;
	
	cout<<endl;
	
	cout << "Masukkan NIM : "; 
	cin >> nilai.mhs.nim;
	cout << "Masukkan Nama : "; 
	cin >> nilai.mhs.nama;
	cout << "Masukkan nilai UTS : "; 
	cin >> nilai.nil.nil1;
	cout << "Masukkan nilai UAS :"; 
	cin >> nilai.nil.nil2;
	
	getchar ();
	return 0;
}


//----------------------------------------------------CODE 5---------------------------------------------
#include <iostream>
using namespace std;
typedef struct orang {
	char nama [30];
	short umur;
} org;

int main (){
	org saya [5];
	int i,x;
	for (i=0;i<=2;i++){
		cout<<"nama : "; cin>>saya[i].nama;
		cout <<"umur : "; cin>>saya[i].umur;
		cout <<endl;
	}
	for(x=0; x<=2; x++){
		cout << "Data ke "<<x<<"" << " bernama " <<saya[x].nama << " dan berumur " << saya[x].umur << " tahun" <<endl;	
   }
}
*/


//----------------------------------------------CODE 6--------------------------------------------------------
#include <iostream>
using namespace std;
struct sum {
	int add(int num1, int num2)
	{
		return num1 + num2;
	}
	int add(int num1, int num2, int num3)
	{
		return num1 + num2 + num3;
	}
};

int main (){
	sum calculator;
	cout <<"hasil 1 : "<< calculator.add(5,7) << endl;
	cout <<"hasil 2 : "<< calculator.add(9,2,5) << endl;
}


