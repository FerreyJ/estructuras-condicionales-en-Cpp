//2. Escriba un programa que lea tres numeros y determine cual de ellos es el mayor

#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Ingrese tres numeros: "; cin>>a>>b>>c;
	
	if(a>b){
		if(a==c){
			cout<<"El Primero y Tercer numero son mayores";
		}
		else if(a>c){
			cout<<"El Primer numero es mayor";
		}
			else {
				cout<<"El Tercer numero es mayor";
		}
	}
	else if(b>c){
			if(b==a){
				cout<<"El Primero y Segundo son los numeros mayores";
			}
			else{
				cout<<"El Segundo numero es mayor";
			}
		}
		else{
			cout<<"El Tercer numero es mayor";
		}
	
	
	return 0;
}
