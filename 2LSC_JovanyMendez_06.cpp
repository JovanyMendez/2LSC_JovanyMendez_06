#include <iostream>
using namespace std;

int main() {
    int Numero1, Numero2, Numero3, Producto, Suma;

    cout << "Ingrese el primer numero: ";
    cin >> Numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> Numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> Numero3;

    if (Numero1 > 0) {
        Producto = Numero1 * Numero2 * Numero3;
        cout << "El producto de los numeros es: " << Producto << endl;
    } else {
        Suma = Numero1 + Numero2 + Numero3;
        cout << "La suma de los numeros es: " << Suma << endl;
    }

    return 0;
}
