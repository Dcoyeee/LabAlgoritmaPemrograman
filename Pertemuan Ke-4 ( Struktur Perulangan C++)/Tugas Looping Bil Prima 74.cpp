#include <iostream>
using namespace std;
int main()
{
	int a;
	bool nilai = true;
	
	cout<<"Masukan Bilangan: ";
	cin>>a;
//	==================================
	if(a>1){
		for(int b=2; b<=a/2; b++){
			if(a%b == 0){
				nilai = false;
			}
		}
	}
	
	else if(a<2){
		cout<<"Bilangan dibawah 2 bukan bilangan prima!"<<endl;
	}
	
	if (nilai == true){
		cout<<"Bilangan tersebut adalah bilangan prima!";
	}
	else if (nilai == false){
		cout<<"Maaf bilangan tersebut bukan bilangan prima!";
	}
	return 0;
}

