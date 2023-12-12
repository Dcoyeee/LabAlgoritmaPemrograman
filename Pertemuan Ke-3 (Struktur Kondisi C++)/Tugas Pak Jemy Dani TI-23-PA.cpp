#include <iostream>
using namespace std;
int main()
{
	cout<<"!!Menghitung Luas Segitiga!!"<<endl;
	cout<<"============================"<<endl;
	
	int a,t,L;
	cout<<"\nMasukan Alas Segitiga: ";
	cin>>a;
	cout<<"Masukan Tinggi Segitiga: ";
	cin>>t;
	
	if (a%2 == 0){
		a=a+9;
	}
	else{
		a=a+2;
	}
	
	if (t < 10){
		t=t*3;
	}
	
	if (t >= 10 && t <= 30){
		t=t;
	}
	
	if (t > 30){
		t=t/2;
	}
	
	cout<<"\nAlas Segitiga Adalah: "<<a<<endl;
	cout<<"Tinggi Segitiga Adalah: "<<t<<endl;
	
	L=(a*t)/2;
	
	cout<<"Maka Luas Segitiga adalah L=("<<a<<"x"<<t<<")/"<<2<<"= "<<L<<"Cm^2";
	
	return 0;
}
