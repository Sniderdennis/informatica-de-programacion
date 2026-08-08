#include <iostream>
using namespace std;

bool Esprimo(int n){
    int contadorD = 0;

    if (n < 2)
        return false;
    
    for (int i = 1; i <= n; i++){
        if (n % i == 0)
            contadorD++;
    }

    if (contadorD > 2)
        return false;

    return true;
}

int main() {
    int n;
    cout << "Ingresa un numero: "; cin >> n;

    if (Esprimo(n))
        cout << "Es primo." << endl;
    else
        cout << "NO es primo." << endl;

    return 0;
}