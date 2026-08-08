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

bool esSophieGermain(int p)
{
    return Esprimo(p) && Esprimo(2 * p + 1);
}

int main() {
    int x;
    cout << "Ingresa un numero: "; cin >> x;

    if (esSophieGermain(x))
        cout << x << " Es primo de sophie porrque "<< 2 * x + 1 << " es primo" << endl;
    else
        cout << x << " NO es primo de sophie porrque ."<< 2 * x + 1 << " no es primo" << endl;

    for (int i = 1; i < 100; i++)
    {
        if (esSophieGermain(i))
            cout << i << " ";
    }
    
    return 0;
}