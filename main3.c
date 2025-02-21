//Tipo de datos literales (primitivos): int, float, double, char, void
//Modificadores de tipo de datos: signed, unsigned, short, long - extender o acortar 
//Palabras reservadas
//Constantes: const
#include <stdio.h>

#define PI 3.14159267 //En tiempo de preprocesamiento, no lleva ";"
#define Lunes 1
void main(){
    const double Pi=3.14159267;
    int numero1=10;
    printf("El valor del numero1 es: %d\n", numero1);
    numero1=3.14; //Operaciones destructivas
    printf("El valor del numero1 es: %d\n", numero1);
    const int numero2=20;  //En tiempo de compilacion

    numero1=30; //Operaciones destructivas
    printf("El valor del numero1 es: %d\n", numero1);
    printf("El valor de Pi es: %2.5f\n", Pi); //Indicas cuantos decimales quieres
    printf("El valor de PI es: %2.5f\n", PI);
    printf("%d\n", Lunes);

    
} 


