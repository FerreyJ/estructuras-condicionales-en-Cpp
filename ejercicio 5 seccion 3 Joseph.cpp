/*5. Escriba un programa que lea de la entrada estánar un carácter e indique en la 
salida estándar si el carácter es una vocal minúscula o no.*/

#include<iostream>

using namespace std;

int main(){
	char vocal;
	
	cout<<"Escriba una vocal: ";cin>>vocal;
	
	switch(vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"Es una vocal minuscula";break;
		default :cout<<"No es vocal minuscula";break;
	}
	
	return 0;
}

