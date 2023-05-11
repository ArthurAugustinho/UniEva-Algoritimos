/*PROGRAMA DE ALOCAÇÃO DINAMICA DE MEMORIA
GERENCIAMENTO DE MEMORIA*/

#include<iostream>
using namespace std;

int main(){
	int n=10, i, *ptr, sum=0;
	
	ptr = new int[n]; //aloca a memoria dinamicamente
	
	if(ptr == NULL){
		cout << "Erro! Memoria nao alocada";
		exit(0);
	}
	cout << "Digite os " << n << " elementos: \n";
	for(i=0; i<10; i++){
		cin >> *(ptr + i);
		sum += *(ptr + i); // sum = sum + *(ptr + i)
	}
	
	cout << "O ponteiro esta no endereço " << ptr << endl;
	cout << "A soma dos cadastrados e: " <<sum<<endl;
	
	delete[] ptr; //libera a memoria alocada
}
