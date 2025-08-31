def producto(a, b, c):
    p = a * b * c
    return p

def suma(a, b, c):
    s = a + b + c
    return s

def main():
    
    Numero1 = int(input("Ingrese el primer numero: "))
    Numero2 = int(input("Ingrese el segundo numero: "))
    Numero3 = int(input("Ingrese el tercer numero: "))

    if Numero1 > 0:
        resultado = producto(Numero1, Numero2, Numero3)
        print("El producto de los numeros es:", resultado)
    else:
        resultado = suma(Numero1, Numero2, Numero3)
        print("La suma de los numeros es:", resultado)

if __name__ == "__main__":
    main()