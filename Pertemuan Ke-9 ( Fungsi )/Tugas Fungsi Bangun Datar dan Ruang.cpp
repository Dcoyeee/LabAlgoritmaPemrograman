#include <iostream>
using namespace std;
const int n=40;

float lp(float p, float l){
	int lp;
	lp = p * l;
	
	cout<<"L: P x l"<<endl;
	cout<<"L: "<<p<<" x "<<l<<endl;
	cout<<"Luas Persegi adalah : "<<lp<<" cm2"<<endl;
}

void garis(int n){
	for(int i=0; i<=n; i++){
		cout<<"=";
	}
	cout<<endl;
}

void vt(float r, float t){
	float phi=3.14;
	float vt = phi * r * r * t;
	cout<< "V = " <<phi<< " x " <<r<< " x " <<r<< " x " <<t<<endl;
	cout<< "Hasil Dari Volume Tabung Pertama Adalah: "<<vt<< " Cm3"<<endl;
	cout<<"\n";
	garis(n);
}

int main(){
	for(int i=0; i<2; i++){
		float p,l;
		cout<<"\nMenghitung Luas Persegi Ke-"<<i+1<<endl;
		cout<<"Masukan Panjang Persegi: ";
		cin>>p;
		cout<<"Masukan Lebar Persegi: ";
		cin>>l;
		
		cout<<lp(p,l)<<endl;
		garis(n);
	}
	
	for(int i=0; i<2; i++){
		float r,phi;
		phi=3.14;
		
		cout<<"\nMenghitung Luas Linkaran Ke-"<<i+1<<endl;
		cout<<"Masukan Ruas Lingkarang: ";
		cin>>r;
		
		cout<<"L: phix r x r"<<endl;
		cout<< "L: " <<phi<< " x " <<r<< " x " <<r<<endl;
		float ll = phi * r * r;
		cout<< "Hasil Dari Luas Lingkaran Pertama Adalah: "<<ll<< " Cm2"<<endl;
		cout<<"\n";
		garis(n);
	}
	
	for(int i=0; i<2; i++){
		float r,t,phi,v;
		phi=3.14;
		
		cout<<"\nMenghitung Luas Lingkaran Ke-"<<i+1<<endl;
		cout<< "Masukan Panjang Jari-Jari: ";
		cin>>r;
		cout<< "Masukan Panjang Tinggi Tabung: ";
		cin>>t;
		
		vt(r,t);
	}

}
