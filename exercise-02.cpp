/*
Nama Program	: exercise-02
Nama			: Bunga Azizha N
NPM				: 140810180016
Kelas			: B
Deskripsi		: Stack Linked List
*/
#include<iostream>
using namespace std;

struct stackList{
	char isi;
	stackList* next;
};
typedef stackList* pointer;
typedef pointer Stack;

void createStack (Stack& TOP){
	TOP=NULL;
}

void createElement(pointer& pBaru){
	pBaru=new stackList;
	cout << "Input Huruf: "; cin >> pBaru->isi;
	pBaru->next=NULL;
}

void push(Stack& TOP, pointer& pBaru){
	if (TOP==NULL) 
		TOP=pBaru;
	else{
		pBaru->next=TOP;
		TOP=pBaru;
	}
}

void printStack(Stack TOP){
	pointer pBottom;
	pointer pPrecBottom;
	if (TOP==NULL) 
		cout << "Stack Kosong"<<endl;
	else{
		while (pBottom!=NULL){
			pBottom=TOP;
			pPrecBottom=NULL;
			while (pBottom->next!=NULL){
				pPrecBottom=pBottom;
				pBottom=pBottom->next;
			}
			cout << pBottom->isi;
			if (pPrecBottom!=NULL) 
				pPrecBottom->next=NULL;
			else break;
		}
	}
}

void reverse(Stack TOP){
	pointer pBantu=TOP;
	if (TOP==NULL) 
		cout << "Stack kosong" << endl;
	else{
		while (pBantu!=NULL){
			cout << pBantu->isi;
			pBantu=pBantu->next;
		}
	}
}

int main(){
	Stack Ma08;
	int a;
	pointer p;
	
	cout<<"--- Stack dengan Linked List ---"<<endl;
	createStack(Ma08);
	cout << "Jumlah Huruf : ";cin>>a;
	cout<<endl;
	for (int i=0; i<a; i++){
		createElement(p);
		push(Ma08,p);
	}
	cout << "\nReverse Word: ";
	reverse(Ma08);	
	cout << "\nWord: ";
	printStack(Ma08);	
}
