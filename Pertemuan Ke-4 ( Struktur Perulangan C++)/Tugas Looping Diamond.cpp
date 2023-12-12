#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Masukan Panjang Pola: ";
	cin>>n;

//Kanan & Kiri Atas
	for(int i=1; i<=n; i++){
		for(int j=n; j>=i; j--){
			cout<<" *";
		}
		for(int j=1; j<i; j++){
			cout<<"  ";
		}
		for(int j=1; j<i; j++){
			cout<<"  ";
		}
		for(int h=n; h>=i; h--){
			cout<<" *";
		}
		cout<<endl;
	}

//Kanan & Kiri Bawah
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<" *";
		}
		for(int j=n; j>i; j--){
			cout<<"  ";
		}
		for(int j=n; j>i; j--){
			cout<<"  ";
		}
		for(int h=1; h<=i; h++){
			cout<<" *";
		}
		cout<<endl;
	}

	return 0;
}

