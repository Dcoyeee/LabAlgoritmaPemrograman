#include <iostream>
using namespace std;
int main()
{
//h=hasil

int j,i,h;
i=21;
	
for(j=2; j<=i; j+=2){
	cout << j;
		if (j < i){
			cout<<" + ";
		}
	}
cout<<" = ";
h=(i+1)/2;
h=h*10;
cout<<h;
}
