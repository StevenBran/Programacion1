#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct nodo {
	int dato;
	nodo* siguiente;
} *primero, *ultimo, *xPtr;




//PARTE DE STEVEN
void IngresarListaCircularSimple(int numero);
void MostarListaCircularSimple();
//FIN PARTE DE STEVEN

//PARTE DAVID
void IngresarListaSimple(nodo *p);
void MostrarListaSimple(nodo *i);
//FIN PARTE DE DAVID

void ingresarcola(nodo*,nodo*,int);
bool cola_vacia(nodo *);
void ingresarpila();
void mostrarcola();
void mostrarpila();

int main() {
	int nro, n, opcion_menu = 0;
	nodo *frente = NULL;
	nodo *fin = NULL;
	while (opcion_menu != 6) {
		cout << "Digite un numero para guardarlo en memoria dinamica" << endl; cin >> nro;
		IngresarListaCircularSimple(nro);
		ingresarcola( *frente, *fin, nro);
		cout << "\n|-----------------------------------------------------|";
		cout << "\n|            ° OPCIONES PARA MOSTRAR °                |";
		cout << "\n|--------------------|--------------------------------|";
		cout << "\n| 1. COLA            | 4. LISTA DOBLEMENTE ENLAZADA   |";
		cout << "\n| 2. PILA            | 5. LISTA CIRCULAR SIMPLE       |";
		cout << "\n| 3. LISTA SIMPLE    | 6. SALIR                       |";
		cout << "\n|-----------------------------------------------------|";
		cout << "\n\n ESCOJA UNA OPCION: ";
		cin >> opcion_menu;
		switch (opcion_menu) {
		case 1:
			cout << "\n\n MODO COLA \n\n";

			break;
		case 2:
			cout << "\n\n MODO PILA \n\n";

			break;
		case 3:
			cout << "\n\n MODO LISTA SIMPLE \n\n";
			
			IngresarListaSimple(p);
			MostrarListaSimple(xPtr);

			break;
		case 4:
			cout << "\n\n MODO LISTA DOBLEMENTE ENLAZADA \n\n";

			break;
		case 5:
			cout << "\n\n MODO LISTA CIRCULAR \n\n";
			MostarListaCircularSimple();

			break;
		case 6:
			cout << "\n\n PROGRAMA FINALIZADO...";
			break;
		default:
			cout << "\n\n Opcion no valida\n\n";
		}

	}
	
	_getch();
}

void IngresarListaCircularSimple(int numero) {
	nodo* nuevo = new nodo();
	nuevo->dato = numero;
	if (primero == NULL) {
		primero = nuevo;
		primero->siguiente = primero;
		ultimo = primero;
	}
	else {
		ultimo->siguiente = nuevo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
	}
}

void MostarListaCircularSimple() {
		nodo* actual = new nodo();
		actual = primero;
		if (primero != NULL) {
			do {
				cout << "\n" << actual->dato;
				actual = actual->siguiente;
			} while (actual != primero);
		}
		else {
			cout << "\n\n La Lista se encuentra vacia\n\n";
		}
		cout << "\n\n";
		system("pause");
		system("cls");
	}

void IngresarListaSimple(nodo *p) {
	p->siguiente = xPtr;
	xPtr = p;

	nodo *p = new nodo;
	p->dato = nro;
}

void MostrarListaSimple(nodo *i) {
	nodo *p = i;
	while (p != NULL){
		cout << p->dato << endl;
		p = p->siguiente;
}
}

void ingresarcola(nodo*&frente, nodo*&fin, int n)
{
	nodo *nuevo = new nodo();
	nuevo->dato = n;
	nuevo->siguiente = NULL;
	if (cola_vacia(frente))
	{
		frente = nuevo;
	}
	else
	{
		fin->siguiente = nuevo;
	}
	fin = nuevo;
	
}

bool cola_vacia(nodo*frente)
{
	return(frente == NULL) ? true : false;
}

void mostrarcola()
{
	while (frente != NULL)
	{
		suprimircola(frente, fin, dato);
		if (frente != NULL)
		{
			cout << dato << ",";
		}
		else
		{
			cout << "dato" << ",";
		}
	}
}