#include <iostream>
using namespace std;

double convertir_angulo_sexagesimal_a_radian(double angulo) {
    const double PI = 3.14159;
    return angulo * PI / 180;
}

double potencia(double base, int exponente) {
    double resultado = 1;

    for (int i = 1; i <= exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

double division(double numerador, double denominador) {
    return numerador / denominador;
}

double calcular_coseno(double x) {
    double coseno = 0;
    int signo = 1;

    // 10 términos de la serie
    for (int i = 0; i < 10; i++) {

        int exponente = 2 * i;

        coseno += signo * division(potencia(x, exponente), factorial(exponente));

        signo *= -1;
    }

    return coseno;
}

int main() {

    double angulo;

    cout << "Ingrese un angulo en grados: ";
    cin >> angulo;

    double radianes = convertir_angulo_sexagesimal_a_radian(angulo);

    cout << "Cos(" << angulo << ") = " << calcular_coseno(radianes);

    return 0;
}