#include <iostream>
#define MAX 5
using namespace std;

struct Tumpuk{
	int top;
	int antrian[MAX];
}perpus;

void inisial(){
	perpus.top=-1;
}
bool kondisiKos(){
	return perpus.top == -1;
}
bool kondisiPen(){
	return perpus.top == MAX-1;
}
void inputdat(){
	if(kondisiPen()){
		cout<<"\nAntrian Penuh"<< endl;
	}
	else{
		perpus.top++;
		cout<<"Masukan Antrian = ";
		cin>>perpus.antrian[perpus.top];
		cout<<"Antrian "<<perpus.antrian[perpus.top]<<" Telah Masuk Ke tumpukan"<<endl;
	}
}
void hapusdat(){
	if(kondisiKos()){
		cout<<"\nAntrian kosong\n"<<endl;
	}
	else{
		cout<<"\nAntrian "<<perpus.antrian[perpus.top]<<" Telah Dihapus"<<endl;
		perpus.top--;
	}
}
void tampil(){
	if(kondisiKos()){
		cout<<"Antrian Kosong";
	}
	else{
		cout<<"Antrian : ";
		for(int i = perpus.top; i >=0; i--){
			cout<<perpus.antrian[i];
		}
	}
}
int main(){
	int pilihan;
	inisial();
	do{
		tampil();
		cout<<"\n1. Masukan"
			<<"\n2. Hapus"
			<<"\n3. Keluar\n"
			<<"Masukan Pilihan: ";
			cin>>pilihan;
		switch(pilihan){
			case 1:
				inputdat();
				break;
			case 2: 
				hapusdat();
				break;
			default : 
				cout<<"Pilihan tidak tersedia"<<endl;
				break;
		}
	}
	while(pilihan != 3);
}
