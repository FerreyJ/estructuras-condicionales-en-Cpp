/*12. Escriba un menu que considere las siguientes opciones:
	Caso 1: Cubo de un número
	Caso 2: Número par o impar
	Caso 3: Salir.*/
#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main(){
	int numero,opcion,regreso;
	
	
	cout<<"\nIngrese un numero: "; cin>>numero;
	menu:
	cout<<"\n¿Que desea hacer?"<<endl;
	cout<<"1- Elevar el numero al cubo"<<endl;	
	cout<<"2- Numero par o impar"<<endl;
	cout<<"3- Salir"<<endl; 
	cout<<"Opcion: ";cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"\nEl cubo del numero es: " <<pow(numero,3);
			caso1:
			cout<<"\n¿Desea realizar otra operacion?"<<endl;
			cout<<"1- Si	2- No"<<endl;cin>>regreso;
			switch(regreso){
				case 1:goto menu;break;
				case 2:cout<<"\nMuchas gracias";break;
				default:cout<<"\nOpcion no valida"; goto caso1;
		}
		break;
		case 2:
			if(numero==0){
				cout<<"\nEl numero es cero";
			}
			else if(numero%2==0){
				cout<<"\nEs un numero par";
			}
			else{
				cout<<"\nEs un numero impar";
			}
			caso2:
			cout<<"\n¿Desea realizar otra operacion?"<<endl;
			cout<<"1- Si	2- No"<<endl;cin>>regreso;
			switch(regreso){
				case 1:goto menu;break;
				case 2:cout<<"\nMuchas gracias";break;
				default:cout<<"\nOpcion no valida"; goto caso2;
			}
			break;
		case 3:cout<<"\nMuchas gracias";break;
		default:cout<<"\nOpcion no valida";
	}
	
	
	return 0;
}

