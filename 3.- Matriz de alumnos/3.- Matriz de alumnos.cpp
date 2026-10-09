#include <iostream>
using namespace std;

int main() {
	float alumnos[10][3];

	for (int i = 0; i < 10; i++) {
		cout << "Promedio del grupo A del alumno " << i + 1 << ": ";
		cin >> alumnos[i][0];

		cout << "Promedio del grupo B del alumno " << i + 1 << ": ";
		cin >> alumnos[i][1];
	}

	for (int i = 0; i < 10; i++) {
		if (alumnos[i][0] > alumnos[i][1]) {
			alumnos[i][2] = alumnos[i][0];
		}
		else {
			alumnos[i][2] = alumnos[i][1];
		}
	}
		cout << "\nResultados:\n";
		cout << "Alumno\tGrupo A\tGrupo B\tMayor\n";

		for (int i = 0; i < 10; i++) {
			cout << i + 1 << "\t"
				<< alumnos[i][0] << "\t"
				<< alumnos[i][1] << "\t"
				<< alumnos[i][2] << endl;
		}

		return 0;
	
}
	