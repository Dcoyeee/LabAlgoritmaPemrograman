#include <iostream>
#include <string>
using namespace std;
struct jenis{
	int banyak;
};
int main(){
	const string cek[3][3] = {{"D","Dada","Rp2.500"},{"P","Paha","Rp2.000"},{"S","Sayap","Rp1.500"}};
	int o1,a1,c1,d1[20],d2=0,d3;
	char h[20];
	
	cout<<"\t\tGEROBAK FRIED CHICKEN"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"\tKode\t\tJenis\t\t Harga"<<endl;
	cout<<"====================================================="<<endl;
	
	for(a1=0; a1<3; a1++){
		for(c1=0; c1<3; c1++){
			cout<<"\t"<<cek[a1][c1]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"====================================================="<<endl;
	
	cout<<endl<<"Banyak jenis : ... ";
	cin>>o1;
	
	jenis jns[20];
	for(a1=0; a1<01; a1++){
		cout<<"Jenis Potong [D/P/S]: ... ";
		cin>>h[a1];
		cout<<"Banyak Potong : ... ";
		cin>>jns[a1].banyak;
	}
	
	string j[5] = {"No","Jenis Potong"," Harga Satuan ","  Banyak Potong","   Jumlah Harga"};
	
	cout<<"\t\tGerobak Fried Chicken"<<"==================================================================================="<<endl;
	for(int q=0; q<5; q++){
		cout<<j[q]<<"\t";
	}
	cout<<"=====================================================================================\n"<<endl;
	
	for(int a2=0; a2<o1; a2++){
		cout<<a2+1<<"\t\t"<<h[a2]<<"\t ";
		if(h[a2] == 'd'  || h[a2] == 'D'){
			cout<<"Rp "<<2500;
		}
		else{
			if(h[a2] == 'p' || h[a2] == 'P'){
				cout<<"Rp "<<2000;
			}
			else{
				if(h[a2] == 's' || h[a2] == 's'){
				cout<<"Rp "<<1500;
			}
		}
	}
	cout<<"\t\t"<<jns[a2].banyak<<"   \t           ";
	if(h[a2] == 'd' || h[a2] == 'D'){
		d1[a2] = 2500*jns[a2].banyak;
		cout<<"Rp "<<2500*jns[a2].banyak;
	}
	else{
		if(h[a2] == 'p' || h[a2] == 'P'){
		d1[a2] = 2000*jns[a2].banyak;
		cout<<"Rp "<<2000*jns[a2].banyak;
		}
		else{
			if(h[a2] == 'p' || h[a2] == 'P'){
				d1[a2] = 2000*jns[a2].banyak;
				cout<<"Rp "<<2000*jns[a2].banyak;
			}
		}
	}
	d2 = d2+d1[a2];
	cout<<endl;
}
d3 = d2 * 10/100;

cout<<"=====================================================================================\n"<<endl;

cout<<"\t\t\t\t\t  Jumlah Bayar :\tRp "<<d2<<endl;
cout<<"\t\t\t\t\t     Pajak 10% :\tRp "<<d3<<endl;
cout<<"\t\t\t\t\t   Total Bayar :\tRp "<<d3+d2<<endl;

cout<<"=====================================================================================\n"<<endl;

}
