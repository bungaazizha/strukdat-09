/*
Nama Program	: exercise-01
Nama			: Bunga Azizha N
NPM				: 140810180016
Kelas			: B
Deskripsi		: Stack Array
*/
#include<iostream>
using namespace std;

const int maxElemen = 255;
struct Stack {
	char isi[maxElemen];
	int TOP;
};
Stack S;

void createStack (Stack& S) {
	S.TOP = -1;
}

void push(Stack& S, int elemenBaru){
	if(S.TOP == maxElemen-1) {
		cout<<"Tumpukan sudah penuh"<<endl;
	}
	else{
		S.TOP=S.TOP + 1;
		S.isi[S.TOP] = elemenBaru;
	}
}

void printStack(Stack S){
	for (int i=0; i<=S.TOP; i++){
		cout << S.isi[i];
	}
}

void Reverse(Stack S){
	for (int i=S.TOP; i>=0; i--){
		cout << S.isi[i];
	}
}

main(){
	Stack Ma08;
	int n;
	char baru;
	
	cout<<"--- Stack dengan Array ---"<<endl;
	cout<<"Jumlah Elemen = "; cin>>n;
	createStack(Ma08);
	cout<<endl;
	for(int i=0; i<n; i++){
			cout<<"Input stack = "; cin>>baru;
	push(Ma08,baru);
	}
	
	cout << "\nWord	: ";
	printStack(Ma08);
	cout << "\nReverse Word: ";
	Reverse(Ma08);	
}
