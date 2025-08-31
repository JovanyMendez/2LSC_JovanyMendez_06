def main():
    Numero1 = int(input("Ingrese el primer número: "))
    Numero2 = int(input("Ingrese el segundo número: "))
    Numero3 = int(input("Ingrese el tercer número: "))

    if Numero1 > 0:
        Producto = Numero1 * Numero2 * Numero3
        print("El producto de los números es:", Producto)
    else:
        Suma = Numero1 + Numero2 + Numero3
        print("La suma de los números es:", Suma)

if __name__ == "__main__":
    main()
