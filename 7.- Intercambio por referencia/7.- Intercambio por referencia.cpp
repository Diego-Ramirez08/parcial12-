
#include <iostream>
using namespace std;

void intercambiar(int& a, int& b) {
    int temporal = a;
    a = b;
    b = temporal;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    cout << "Antes del intercambio:" << endl;
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    intercambiar(num1, num2);

    cout << "\nDespues del intercambio:" << endl;
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    return 0;
}
