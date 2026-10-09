
#include <iostream>
using namespace std;

int main() {
    float grupo1[5];
    float grupo2[5];
    float mayores[5];

    cout << "Promedios del grupo 1:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Alumno " << i + 1 << ": ";
        cin >> grupo1[i];
    }

    cout << "\nPromedios del grupo 2:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Alumno " << i + 1 << ": ";
        cin >> grupo2[i];
    }

    for (int i = 0; i < 5; i++) {
        if (grupo1[i] > grupo2[i]) {
            mayores[i] = grupo1[i];
        }
        else {
            mayores[i] = grupo2[i];
        }
    }

    cout << "\nPromedios mas altos por posicion:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Posicion " << i + 1 << ": "
            << mayores[i] << endl;
    }

    return 0;
}