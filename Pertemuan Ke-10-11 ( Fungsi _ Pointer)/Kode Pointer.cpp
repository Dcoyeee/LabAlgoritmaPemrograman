#include <iostream>
using namespace std;
int main(){
	int ilham;
	int *raka;
	int **amir;
	//clrscr();
	ilham =75;
	cout<<"nilai ILHAM = "<<ilham<<endl;
	raka = &ilham;
	amir = &raka;
	
	cout<<"nilai RAKA hasil mengakses ILHAM = ";
	cout<<*raka<<endl;
	cout<<"Nilai AMIR hasil mengakses ILHAM = ";
	cout<<*amir<<endl;
	getchar();
}
