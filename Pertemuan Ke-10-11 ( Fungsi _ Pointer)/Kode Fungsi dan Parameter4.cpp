#include <iostream>
using namespace std;

void nilai (int *y){
	cout<<"alamat parameter :"<<y<<endl;
	cout<<"nilai parameter :"<<*y<<endl;
}
void kuadrat (int *z){
	*z = *z * 2;
}

int main(){
//	int x =10;
	int x;
	cout<<"input nilai x: ";
	cin>>x;
	nilai (&x);
	cout<<"angka :"<<x<<endl;
	kuadrat(&x);
	cout<<"kuadrat :"<<x<<endl;
}
