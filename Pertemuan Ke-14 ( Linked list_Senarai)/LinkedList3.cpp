#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
	int info;
	node *next;
}*top, *newptr, *save, *ptr;

node *create_new_node(int);
void push(node *);
void display(node *);

int main(){
//	clrscr;
	int inf;
	char ch='y';
	top=NULL;
	while (ch=='y'||ch=='Y'){
		cout<<"Masukan Kode Baru..";
		cin>>inf;
		newptr = create_new_node(inf);
		if(newptr == NULL){
			cout<<"\nMaaf.!!..tidak dapat melanjutkan perintah..!!\n";
			cout<<"Tekan tombol apa saja untuk keluar..\n";
			getchar();
			exit(1);
		}
		push(newptr);
		cout<<"\nAntrian tumpukan saat ini :\n";
		display(top);
		cout<<"\nIngin menambah antrian? (n/y)..";
		cin>>ch;
	}
	getchar();
}

node *create_new_node(int x){
	ptr = new node;
	ptr->info = x;
	ptr->next = NULL;
	return ptr;
}

void push(node *n){
	if(top == NULL){
		top = n;
	}
	else{
		save = top;
		top = n;
		n->next = save;
	}
}

void display(node *n){
	while(n != NULL){
		cout<<n->info<<" -> ";
        n = n->next;
	}
	cout<<"!!\n";
}
