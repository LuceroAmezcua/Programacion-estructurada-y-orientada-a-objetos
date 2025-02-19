#include <stdio.h>
// C es un lenguje tipado, se debe espe el tipo de dato
void tabladel5();
void main(){ //ambito o scope de varibles/funciones
    //int numero_1; //Variable sin iniciar
    //int numero_2 = 5; //Decalaración de variable
    //printf("%d", numero_1*numero_2); //interolación de cadenas (enteros %d)
    tabladel5();
}
void tabladel5(){
    int tabla = 5;
    int prod = 0;
    short contador = 1; //modificador del tipo de dato
    prod = tabla * contador;
    printf("%d * %d = %d\n" ,tabla,contador,prod);
    contador= contador + 1;
    prod = tabla * contador; //destructiva
    printf("%d * %d = %d\n" ,tabla,contador,prod);
    contador++;
    prod = tabla * contador;
    printf("%d * %d = %d\n" ,tabla,contador,prod);
    contador++;
    prod = tabla * contador;
    printf("%d * %d = %d\n" ,tabla,contador,prod);
    contador++; 
    prod = tabla * contador;
    printf("%d * %d = %d\n", tabla,contador,prod);

}