#include <stdio.h>
void main(){
    int numero1=0;
    printf("introduce un numero: ");
    scanf("%d", &numero1); //& nos permite direccionar
    printf("El valor de numero1 es: %d\n", numero1);
    for (int i=1; i<=10; i++){
        printf("%d * %d= %d\n", numero1, i, numero1*i);
    }
}