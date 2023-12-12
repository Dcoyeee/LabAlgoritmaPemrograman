#include <iostream>
using namespace std;

long int pangkat(int x, int y);

int main(){
	int a,b;
	cout<< "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF";
	cout<< "\nMasukan Nilai X = ";
	cin>>a;
	cout<< "Masukan Nilai Y = ";
	cin>>b;
	
	pangkat(a,b);
	
	cout<<a<<" Dipangkatkan "<<b<<" = "<<pangkat(a,b);
}

long int pangkat(int x, int y){
	if(y==0){
		return 1;
	}
	else{
		return x * pangkat(x,y-1);
	}
}
