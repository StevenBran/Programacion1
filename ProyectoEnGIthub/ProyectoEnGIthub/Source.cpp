#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void giancarlo();







int main() {
	int opcion_menu = 0;

	while (opcion_menu != 6) {
		cout << "\n|-----------------------------------------------------|";
		cout << "\n|            ° OPCIONES PARA MOSTRAR °                |";
		cout << "\n|--------------------|--------------------------------|";
		cout << "\n| 1. COLA            | 4. LISTA DOBLEMENTE ENLAZADA   |";
		cout << "\n| 2. PILA            | 5. LISTA CIRCULAR              |";
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

			break;
		case 4:
			cout << "\n\n MODO LISTA DOBLEMENTE ENLAZADA \n\n";

			break;
		case 5:
			cout << "\n\n MODO LISTA CIRCULAR \n\n";

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