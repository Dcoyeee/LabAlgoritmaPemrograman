#include <iostream>
using namespace std;

void cek(int *c){
	int r, s;
	r = *c% 2;
	if(r == 0){
		*c = *c +1;
		cout<<" "<<*c<<" ";
	}
}

int main(){
	int t, p, *d;
	d=&p;
	cout<<"Masukan Bilangan = ";
	cin>>p;
	t = p;
	cout<<p<<" ";
	cek(&p);
	cout<<t;
	cout<<" "<<*d;
	return 0;
}
