/*4. Realice un programa que lea un valor entero y permita comprobar si un numero 
digitado por el usuario es positivo o negativo.*/
#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Ingrese un numero: ";cin>>numero;
	
	if(numero==0){
		cout<<"\nEl numero es cero";
	}
	else if(numero>0){
		cout<<"\nEs un numero positivo";
	}
	else{
		cout<<"\nEs un numero negativo";
	}
	
	return 0;
}


