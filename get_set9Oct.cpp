#include <iostream>
#include <stdlib.h>
using namespace std;

class operaciones{
	public:
		float a,b,c;
		operaciones()
			{
			a = 0;b = 0;c = 0;
			}
			
		void setsuma(float x, float y);
		void getsuma();
		
		void setresta(float x, float y);
		void getresta();
		
		void setmulti(float x, float y);
		void getmulti();
		
		void setdivi(float x, float y);
		void getdivi();	
};

void operaciones::setsuma(float x, float y)
	{
		a=x;
		b=y;
		c= a+b;
	} 

void operaciones::getsuma()
	{
		cout <<"\nEl resultado de tu suma es: "<< c <<endl;
		cout << "\n" ;
		cout << "\n" ;
	}
	
void operaciones::setresta(float x, float y)
	{
		a=x;
		b=y;
		c= a-b;
	} 
void operaciones::getresta() 
	{
		cout <<"\nEl resultado de tu resta es: "<< c <<endl;
		cout << "\n" ;
		cout << "\n" ;
	}
	
void operaciones::setmulti(float x, float y)
	{
		a=x;
		b=y;
		c= a*b;
	} 
	
void operaciones::getmulti()
	{
		cout <<"\nEl resultado de tu multiplicacion es: "<< c <<endl;
		cout << "\n" ;
		cout << "\n" ;
	}
void operaciones::setdivi(float x, float y)
	{
		a=x;
		b=y;
		c= a/b;
	} 
	
void operaciones::getdivi()
	{
		cout <<"\nEl resultado de tu division es: "<< c <<endl;
		cout << "\n" ;
		cout << "\n" ;
	}

int main(){
	float n,m;
	int q;
	operaciones basica;

	do{
		cout <<"Que operacion desea hacer?"<<endl;
		cout <<"\n1.-Suma"<<endl;
		cout <<"2.-Resta"<<endl;
		cout <<"3.-Division"<<endl;
		cout <<"4.-Multiplicacion"<<endl;
		cout <<"5.-Salir"<<endl;
		
		cout <<"\nIngrese una opcion: ";
		cin >> q;
		
		switch(q){
			case 1:     
				cout <<"\nIngrese el primer numero:  ";
	            cin >> n;
				cout <<"Ingrese el segundo numero  ";
				cin >>m;
				basica.setsuma(n,m);
				basica.getsuma();
			break;
			
			case 2:     
				cout <<"\nIngrese su primer numero:  ";
	            cin >> n;
				cout <<"Ingrese su segundo numero:  ";
				cin >>m;
				basica.setresta(n,m);
				basica.getresta();
			break;
			
			case 3:     
				cout <<"\nIngrese su primer numero:  ";
	            cin >> n;
				cout <<"Ingrese su segundo numero:  ";
				cin >>m;
			basica.setdivi(n,m);
			basica.getdivi();
			break;
			
			case 4:     
				cout <<"\nIngrese su primer numero:  ";
	            cin >> n;
				cout <<"Ingrese su segundo numero:  ";
				cin >>m;
				basica.setmulti(n,m);
				basica.getmulti();
			break;
			
			case 5:     
				cout <<"\nAdios";
	        break;
	        
			default: 
				cout <<"\nError";
			break;		  
		}	
	}

	while(q!=5);
	
} 
