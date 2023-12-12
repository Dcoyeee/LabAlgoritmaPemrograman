#include <iostream>
using namespace std;
int main()
{
	int a;
	
	cout<< "Masukan bilangan 1 atau 0: ";
	cin>>a;
	
	if (a==1);
	goto a1;
	
	if (a==0);
	goto a0;
	
	a1:
		cout<<"Bilangan yang anda masukan adalah bilangan 1!";
//		goto akhir;
	a0:
		cout<<"Bilangna yang nada masukan adalah bilangan 2!";
//		goto akhir;
		
//	akhir:
	return 0;
	
}
