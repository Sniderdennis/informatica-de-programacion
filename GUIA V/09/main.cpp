#include <iostream>
#include <cmath>
using namespace std;

void division() {
    int signo = 1;
    int denominador = 1;

    double PI = 0;
    double PIAnterior = 0;
    double error = pow(10, -8); // 10^-15 es muy grande usar mejor de -6 a -8

    do {
        PIAnterior = PI;

        PI += 4.0 / (denominador * signo);

        signo *= -1;
        denominador += 2;

    } while (abs(PI - PIAnterior) >= error);

    cout << "PI aproximado = " << PI << endl;
}

int main() {
    division();

    return 0;
}