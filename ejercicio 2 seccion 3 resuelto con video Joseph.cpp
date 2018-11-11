//2. Escriba un programa que lea tres numeros y determine cual de ellos es el mayor

#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Ingrese tres numeros: "; cin>>a>>b>>c;
	
	if((a>=b) && (a>=c)){
		cout<<"\nEl numero mayor es: "<<a<<endl;
	}
	else if((b>=a)&&(b>=c)){
		cout<<"\nEl numero mayor es: "<<b<<endl;
	}
	else{
		cout<<"\nEl numero mayor es: "<<c<<endl;
	}
	return 0;
}
