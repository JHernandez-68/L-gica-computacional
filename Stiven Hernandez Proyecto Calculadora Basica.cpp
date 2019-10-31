//PROYECTO DE MENÚ.
//JHOAN STIVEN HERNANDEZ
//CALCULADORA
//LOGICA COMPUTACIONAL (2018-2).
#include <iostream>
using namespace std;
int main (){
	
	system("color 02");
	
	int opcion1, opcion2, i=1, n=1000;
	float a, b, c, d;
	
	while(i<n){
		cout<<"\t"<<"CALCULADORA BASICA"<<"\n";
		cout<<"Ingrese la operacion que desea realizar:"<<"\n";
		cout<<"(1) Para suma."<<"\n";
		cout<<"(2) Para resta"<<"\n";
		cout<<"(3) Para multiplicar"<<"\n";
		cout<<"(4) Para dividir"<<"\n";
			cin>>opcion1;
		system("cls");
		switch(opcion1){
			case 1:
				cout<<"La suma es a+b=c, por tanto, digite: "<<endl;
				cout<<"a: ";
					cin>>a;
				cout<<"\nb: ";
					cin>>b;
				c=a+b;
				cout<<"\nLa suma de "<<a<<"+"<<b<<" es igual a "<<c<<"\n";
				break;
			case 2:
				cout<<"La resta es a-b=c, por tanto, digite"<<"\n";
				cout<<"a:";
					cin>>a;
				cout<<endl<<"b:";
					cin>>b;
				c=a-b;
				cout<<"\nLa resta de "<<a<<"-"<<b<<" es igual a "<<c<<"\n";
				break;
			case 3:
				cout<<"La multiplicacion es a*b=c, por tanto, digite"<<"\n";
				cout<<"a:";
					cin>>a;
				cout<<endl<<"b:";
					cin>>b;
				c=a*b;
				cout<<"\nLa multiplicacion de "<<a<<"*"<<b<<" es igual a "<<c<<"\n";
				break;
			case 4:
				cout<<"La division es a/b=c, por tanto, digite"<<"\n";
				cout<<"a:";
					cin>>a;
				cout<<endl<<"b:";
					cin>>b;
				c=a/b;
				cout<<"\nLa division de "<<a<<"/"<<b<<" es igual a "<<c<<"\n";
				break;
			default:
			cout<<"Usted ingreso un caracter/digito erroneo"<<endl;
		}
		cout<<endl;
	cout<<"Digite (1) si quiere realizar otra operacion o (2) si quiere salir del programa "<<"\n";
    	cin>>opcion2;
    	
    system("cls");
		switch(opcion2){
	    	case 1:
	    		i++;
	    		break;
		    case 2:
		    	i=n;
		    	cout<<"Vuelva pronto ;)";
			break;
			 
			default:
				cout<<"Dato erroneo"<<endl;
				cout<<"Volviendo al menu principal..."<<endl;
				i++;
		}
	}
	return 0;
}

