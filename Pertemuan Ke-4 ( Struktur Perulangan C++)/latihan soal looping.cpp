#include <iostream>
using namespace std;
int main()
{
	int a,i,j,k;
	cout<<"Input lebar belah ketupat: ";
	cin>>a;
	cout<<endl;
	
	for(i=1; i<=a; i++){
		for(j=1; j<=a-i; j++){
			cout<<" ";
		}
		
		for(k=1; k<=i; k++){
			cout<<" *";
		}
		cout<<endl;
	}
	
	for(i=1; i<=a; i++){
		for (j=1; j<=1; j++){
			cout<< " ";
		}
			
		for(k=1; k<=a-1; k++){
			cout<<" *";
		}
		cout<<endl;
	}
		
		
		return 0;
	}
	
