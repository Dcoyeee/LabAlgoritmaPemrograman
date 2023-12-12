#include <iostream>
using namespace std;
#define max 10
string Data[max];
int top=0;

bool isEmpty (){
	if ( top == 0){
		return true;
	}else{
		return false;
	}
}

bool isFull(){
	if( top >= max){
		return true;
	}else{
		return false;
	}
}

void display(){ 
	if(!isEmpty()){ 
		cout << "Data Tersimpan :"<<endl;
		for(int a=0; a<top; a++){ 
			cout << a+1 << ". "<< Data[a] << endl;
		}
	} else { 
		cout << " \tEmpty !" << endl;
	}
	
	cout<< "======================"<<endl;
	
	if(isFull()){ 
		cout << "stack Penuh" << endl;
	}
	cout << endl;
}

void push (){
	if(!isFull()) { 
		cout << "Masukan Data :";
		cin >> Data[top]; 
		top++; 
	}
}

void pop (){ 
	if(!isEmpty()){ 
		top--; 
	}
}

 int main(){
 	
 	int box;
  string isi;
  
  stack :
	system ("cls");   
	cout<< "\tStack : "<<endl;
	cout<< "======================"<<endl;     
  	  display(); 
      cout << "1. Push\n2. Pop\n3. Clear\n4. Exit\nPergerakan ( TOP ) :"<<top;
      cout << "\n\n>> Choose :";
	  cin>>box; 
	  
	  if	( box == 1){
	  	system ("cls");     
	  	push(); 
	  	goto stack; //
	  }else if(box == 2){
	  	pop(); 
	  	goto stack;
	  }
	  system ("cls");       
	  cout << "Program Selesai";
}
