/*9. Cambiar un numero entero con el mismo valor pero en romanos.
	M=1000
	D=500
	C=100
	L=50
	X=10
	V=5
	I=1
*/
#include<iostream>

using namespace std;

int main(){
	int j,m,c,d,u;
	
	cout<<"Ingrese un numero: "; cin>>j;
	
	u=j%10;j/=10;
	d=j%10;j/=10;
	c=j%10;j/=10;
	m=j%10;j/=10;
	
	switch(m){
		case 1:cout<<"M";break;
		case 2:cout<<"MM";break;
		case 3:cout<<"MMM";break;
	}
	switch(c){
		case 1:cout<<"C";break;
		case 2:cout<<"CC";break;
		case 3:cout<<"CCC";break;
		case 4:cout<<"CD";break;
		case 5:cout<<"D";break;
		case 6:cout<<"DC";break;
		case 7:cout<<"DCC";break;
		case 8:cout<<"DCCC";break;
		case 9:cout<<"CM";break;
	}
	switch(d){
		case 1:cout<<"X";break;
		case 2:cout<<"XX";break;
		case 3:cout<<"XXX";break;
		case 4:cout<<"XL";break;
		case 5:cout<<"L";break;
		case 6:cout<<"LX";break;
		case 7:cout<<"LXX";break;
		case 8:cout<<"LXXX";break;
		case 9:cout<<"XC";break;
	}
	switch(u){
		case 1:cout<<"I";break;
		case 2:cout<<"II";break;
		case 3:cout<<"III";break;
		case 4:cout<<"IV";break;
		case 5:cout<<"V";break;
		case 6:cout<<"VI";break;
		case 7:cout<<"VII";break;
		case 8:cout<<"VIII";break;
		case 9:cout<<"IX";break;
	}
	
	return 0;
}


