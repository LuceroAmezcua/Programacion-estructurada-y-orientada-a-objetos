//Escriba una funcion que realice la multiplicacion
//argumentos en funciones
#include <stdio.h>

// Prototipos de funciones
int multiplicar(int a, int b);
int leer_numero(char *mensaje);
void tablamultiplicar(int a, int b);

int main() {
    int a = leer_numero("Introduce un número: ");
    int b = leer_numero("Introduce las veces: ");
    tablamultiplicar(a, b);
    return 0;
}

// Función para multiplicar dos números
int multiplicar(int a, int b) {
    return a * b;
}

// Función para leer un número desde el usuario
int leer_numero(char *mensaje) {
    int a;
    printf("%s", mensaje);
    scanf("%d", &a);
    return a;
}

// Función para imprimir la tabla de multiplicar
void tablamultiplicar(int a, int b) {
    for (int i = 1; i <= b; i++) {
        printf("%d x %d = %d\n", a, i, multiplicar(a, i));
    }
}
