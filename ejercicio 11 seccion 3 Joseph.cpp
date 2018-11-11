/*11. Escriba un programa que simule un cajero automatico con un saldo inicial de 
1000 dolares.*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int si=1000,clave,opcion,monto,retiro,operacion,caso;
	//Clave:1234
	menu:
	cout<<"\nBienvenido Sr."<<endl;
	cout<<"Por favor ingrese su clave"<<endl<<endl;cin>>clave;
	
	if (clave==1234){
		opciones:
		cout<<"\nBienvenido Sr. Ferrey"<<endl;
		cout<<"Ingrese la operacion a realizar:"<<endl;
		cout<<"\n1- Retirar dinero"<<endl;
		cout<<"\n2- Consultar saldo"<<endl;
		cout<<"Inserte la opcion deseada: ";cin>>opcion;
		switch(opcion){
			case 1:cout<<"Ingrese la cantidad a retirar en $:";cin>>monto;
			if(monto<si){
			cout<<"\nUsted va a retirar: "<<monto<<endl;
			cout<<"1- Si	2- No "<<endl<<endl; cin>>retiro;
			switch(retiro){
				case 1:cout<<"\nUsted ha retirado $"<<monto<<endl;
				cout<<"¿Desea realizar otra operacion?"<<endl<<endl;
				cout<<"1- Si	2- No"<<endl;cin>>operacion;
				switch(operacion){
					caso1:
					case 1:goto opciones;break;
					case 2:cout<<"Muchas gracias"<<endl;break;
					default:cout<<"Opcion no valida"<<endl; goto caso1;
				}
				break;
				case 2:
				caso2:
				cout<<"\n¿Desea realizar otra operacion?"<<endl;
				cout<<"1- Si	2- No"<<endl;cin>>caso;
				switch(caso){
					case 1:goto opciones;break;
					case 2:cout<<"Muchas gracias por usar nuestros servicios"<<endl<<endl;break;
					default:cout<<"Error: La operacion ingresada no es valida"<<endl;goto caso2;
				}
				break;
			default:cout<<"\nOpcion ingresada no valida"; goto opciones;
			}
		}
		else{
			cout<<"No posee saldo para esta operacion"; goto opciones;
		}
		break;
		case 2:cout<<"Su saldo actual es igual a $"<<si<<endl;
		cout<<"\nMuchas gracias por usar nuestros servicios"<<endl;break;
		default:cout<<"Ingrese una operacion valida"; goto opciones;
		}
	}
	else {
		cout<<"Clave no valida"<<endl; goto menu;
	}
	
	return 0;
}


