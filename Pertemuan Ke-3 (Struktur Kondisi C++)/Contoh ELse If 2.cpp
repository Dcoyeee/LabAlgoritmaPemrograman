#include <iostream>
using namespace std;
int main()
{
	double total_beli,potongan=0,jum_bayar=0;
	cout<<"Total Pembelian Rp. ";
	cin>>total_beli;
	
	if (total_beli < 50000){
	potongan = 0.2 * total_beli;
	}
		
	cout<<"Besarnya Potongan Rp. "<<potongan<<endl;
	jum_bayar = total_beli - potongan;
	cout<<"Besarnya yang harus di bayar Rp.  "<<jum_bayar;
	
	return 0;
	
}
