
#include <iostream>
using namespace std;

int main() {
	float calificaciones[6];
	float suma = 0;

	for (int i = 0; i < 5; i++) {
		cout << "ingresa la calificacion " << i + 1 << ": ";
		cin >> calificaciones[i];

		suma += calificaciones[i];
	}

	calificaciones[5] = suma / 5;

	cout << "\nCalificaciones y promedio:\n";

	for (int i = 0; i < 6; i++) {
		if (i < 5) {
			cout << "Calificacion " << i + 1 << ": ";
		}
		else {
			cout << "Promedio: ";
		}

		cout << calificaciones[i] << endl;
	}

	return 0;
}