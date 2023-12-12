#include <iostream>
using namespace std;
int main(){
	char band_metal[]="SEPULTURA";
	char *band_punk = "RANCID";
	cout<<"Nama Band Metal = "<<band_metal<<endl;
	cout<<"Nama Band Punk = "<<band_punk;
	band_punk+=3;
	cout<<"Nama Band Metal = "<<band_metal<<endl;
	cout<<"Nama Band Pung = "<<band_punk<<endl;
	getchar();
}
