//1. Escriba un programa que lea dos numeros y determine cual de ellos es el mayor

#include<iostream>

using namespace std;

int main(){
	int j1,j2;
	
	cout<<"Ingrese dos numeros: "; cin>>j1>>j2;
	
	if(j1==j2){
		cout<<"Ambos numeros son iguales";
	}
	else if(j1>j2){
		cout<<"El mayor es: "<<j1;
	}
	else{
		cout<<"El mayor es:"<<j2;
	}
	
	return 0;
}
