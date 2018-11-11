/*6. Escriba un programa que lea de la entrada estándar un carácter e indique en la
salida estándar si el carácter es una vocal minúscula, es una vocal mayúscula o no
es una vocal.*/
#include<iostream>

using namespace std;

int main(){
	char vocal;
	
	cout<<"Introduzca una letra: ";cin>>vocal;
	
	switch(vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"Es una vocal minuscula";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':cout<<"Es una vocal mayuscula";break;
		default :cout<<"No es una vocal";break;
	}
	
	return 0;
}

