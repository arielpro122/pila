///Ariel humberto Valle Escoto, 08 de diciembre del 2021

#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void mostrarPila(Nodo *&, int &);

int main(){
	Nodo *pila = NULL;
	int eleccion,dat;

	do{
		cout<<"\t\tMENU\n";
		cout<<"1. Insertar un caracter a la pila.\n"<<
			"2. Mostrar todos los elementos de la pila.\n"<<
			"3. Salir\n"<<
			"Digite su opcion: ";
		cin>>eleccion;
		
		if(eleccion==1){
			cout<<"\nDigite un numero. ";
			cin>>dat;
			agregarPila(pila,dat);
		}
		else if(eleccion==2){
			cout<<"\nLa pila es: \n";
			while(pila!=NULL){
				mostrarPila(pila,dat);
				if(pila!=NULL){
					cout<<dat<<" , ";
				}
				else{
					cout<<dat<<".\n\n";
				}
			}
		}
		else if(eleccion==3){
			return 0;
		}
		else{
			cout<<"SOLO HAY 3 OPCIONES PENDEJO\n\n";
		}
	}while(true);
	
	cout<<"\n\n";
	system("pause");
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\t El elemento "<<n<<" ha sido agregado a PILA correctamente\n\n\n";
}

void mostrarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
