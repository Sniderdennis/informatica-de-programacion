#include <iostream>
#include <cmath>
using namespace std;

double RaizCuadrada(double n) {
    if (n < 0) {
        cout << "NO existe raices negativas." << endl;
        return -1;
    }
    
    double x = n;
    double error = 0.00001;

    while (abs(x * x - n) > error) {
        x = (x + n / x) / 2;
    }

    return x;
}

int main() {
    int z;
    cout << "Ingresa un numero: "; cin >> z;

    cout << RaizCuadrada(z) << endl;
    
    return 0;
}