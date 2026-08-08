#include <iostream>
using namespace std;

void pares(int a, int b) {
    int cantidad = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cantidad++;
            cout << i << endl;
        }
    }
    cout << "La cantidad de numeros pares en el rango de a y b es: " << cantidad << endl;
}


int main() {
    int a, b;
    cout << "Ingrese un numero: "; cin >> a;
    cout << "Ingrese otro numero: "; cin >> b;

    pares(a, b);

    return 0;
}