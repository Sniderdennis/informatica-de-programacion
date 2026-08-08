#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        cout << "Error: El factorial no esta definido para numeros negativos." << endl;
        return -1;
    }

    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int division(int numerador, int denominador) {
    return numerador / denominador;
}

int combinatorio(int n, int r) {
    int numerador = factorial(n);
    int denominador = factorial(r) * factorial(n - r);

    return division(numerador, denominador);
}

int main() {
    int n, r;

    cout << "Ingrese n: ";
    cin >> n;

    cout << "Ingrese r: ";
    cin >> r;

    cout << "El numero combinatorio es: " << combinatorio(n, r);

    return 0;
}