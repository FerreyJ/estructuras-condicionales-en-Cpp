/*8. Escriba un programa que lea de la entrada estándar tres numeros. Después debe
leer un cuarto numero e indicar si el numero coincide con alguno de los anteriores.*/

#include<iostream>

using namespace std;

int main(){
	int a,b,c,d;
	
	cout<<"Introduzca tres numeros: ";cin>>a>>b>>c;
	cout<<"Introduzca el cuarto numero: ";cin>>d;
	
	if((d==a)||(d==b)||(d==c)){
		cout<<"\nEl Cuarto numero es igual a almenos uno de los numeros anteriores"<<endl;
	}
	else{
		cout<<"\nEl Cuarto numero no es igual a los anteriores"<<endl; 
	}
	return 0;
}

