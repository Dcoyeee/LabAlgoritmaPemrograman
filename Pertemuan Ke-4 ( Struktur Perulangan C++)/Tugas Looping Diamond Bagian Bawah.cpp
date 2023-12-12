#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Masukan Panjang Pola: ";
	cin>>n;

//Kiri Bawah
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<" 3";
		}
		cout<<endl;
	}
	

//Kanan Bawah
	for(int i=1; i<=n; i++){
		for(int j=n; j>i; j--){
			cout<<"  ";
		}
		for(int h=1; h<=i; h++){
			cout<<" 4";
		}
		cout<<endl;
	}

	
	return 0;
}
