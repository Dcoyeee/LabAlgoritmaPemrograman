#include <iostream>
using namespace std;
/*
void kata(string *y){
	cout<<"alamat dari kata:"<<y<<endl;
	cout<<"value dari variabel kata :"<<*y<<endl;
}
//void kuadrat (int *z){
//	*z = *z * 2;
//}

int main(){
//	int x =10;
	string x;
	cout<<"input kata dari variabel x: ";
	getline(cin,x);
	kata(&x);
//	cout<<"kata :"<<x<<endl;
//	kuadrat(&x);
//	cout<<"kuadrat :"<<x<<endl;
}
*/

int main(){
	int ilham, amir, *raka;
	//clrscr();
//	ilham = 75;
	cout<<"Input Nilai Ilham dan teman-temannya = ";
	cin>>ilham;
	amir = ilham;
	raka = &ilham;
	cout<<"Nilai ILHAM = "<<ilham<<endl;
	cout<<"Nilai AMIR = "<<amir<<endl;
	cout<<"Nilai RAKA = "<<raka<<endl;
	cout<<"Nilai RAKA = "<<*raka<<endl;
	
	if(ilham == 100){
		cout<<"luarbiasa!!";
	}
	else if(ilham < 100){
		cout<<"Kalian juga keren!!";
	}
	getchar();
}


