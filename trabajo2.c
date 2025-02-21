// escriba un programa que calcule el promedio de n numeros leidos desde el teclado

#include <stdio.h>
int leer_cantidad();
void numeros(int n);


int main(){
    int n = leer_cantidad(); // Pedimos la cantidad de números
    numeros(n);              // Llamamos a la función para obtener los números y calcular el promedio
    return 0;

}
int leer_cantidad(){
    int n;
    printf("Dame la cantidad de números: ");
    scanf("%d", &n);  // Aquí usamos & para almacenar el valor en la variable
    return n;
}
void numeros(int n){
    int suma=0;
    int num=0;
    for (int i = 1; i <= n; i++) {
        printf("Dame el número %d: ", i);
        scanf("%d", & num);
        suma = suma+num;
}
    float promedio=(float)suma/n;
    printf("el promedio es: %.2f\n", promedio);
}