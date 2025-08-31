#include <iostream>
#include <stdio.h>
using namespace std;

int producto(int a, int b, int c) {
    int p = a * b * c;
    return p;
}

int suma(int a, int b, int c) {
    int s = a + b + c;
    return s;
}

int main() {
    int Numero1, Numero2, Numero3;
    int Resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d", &Numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &Numero2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &Numero3);

    if (Numero1 > 0) {
        Resultado = producto(Numero1, Numero2, Numero3);
        printf("El producto de los numeros es: %d\n", Resultado);
    } else {
        Resultado = suma(Numero1, Numero2, Numero3);
        printf("La suma de los numeros es: %d\n", Resultado);
    }

    return 0;
}

