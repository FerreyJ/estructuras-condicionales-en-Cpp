/*3. Realice un programa que lea un valor entero y determine si se trata de un numero
par o impar*/

#include<iostream>

using namespace std;

int main(){
	int a;
	
	cout<<"Ingrese un numero: ";cin>>a;
	
	if(a==0){
		cout<<"El numero es cero";
	}
	else if(a%2==0){
		cout<<"\nEl numero es par";
	}
	else{
		cout<<"\nEl numero es impar";
	}
	
	return 0;
}
