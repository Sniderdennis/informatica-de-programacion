#include <iostream>
#include <cmath>
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

bool sonGemelos(int a, int b)
{
    if(Esprimo(a) == false|| Esprimo(b) == false)
        return false;

    return abs(a - b) == 2; 
}

int main() {
    int x;
    cout << "Ingrese un numero: "; cin >> x;

    if (sonGemelos(x, x+2))
        cout << x << " Tiene un primo gemelo."<< endl;
    else
        cout << x << " NO tiene primo gemelo."<< endl;

    for (int i = 1; i <= 100; i++)
    {
        if (sonGemelos(i, i+2))
            cout << "(" << i << " ; " << i + 2 << ")" << endl;
    }

    return 0;
}