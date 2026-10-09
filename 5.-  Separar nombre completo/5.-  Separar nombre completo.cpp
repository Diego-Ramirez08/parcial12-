#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	string nombreCompleto;
	string nombre;
	string apellido;

	cout << "Ingresa tu nombre y apellido: ";
	getline(cin, nombreCompleto);

	int espacio = nombreCompleto.find(' ');

	nombre = nombreCompleto.substr(0, espacio);
	apellido = nombreCompleto.substr(espacio + 1);

	bool tieneNumero = false;

	for (int i = 0; i < nombreCompleto.length(); i++) {
		if (isdigit(nombreCompleto[i])) {
			tieneNumero = true;
		}
	}

	if (tieneNumero) {
		cout << "Error: el nombre y apellido no deben contener numeros." << endl;
	}
	else {
		cout << "Nombre: " << nombre << endl;
		cout << "Apellido: " << apellido << endl;
	}

	return 0;
}