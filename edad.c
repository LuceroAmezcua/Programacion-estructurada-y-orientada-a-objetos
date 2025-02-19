/* Escribir un programa que dado el año de nacimiento y el año actual, calcule la edad
Escriba una funcion que imprima la edad
escriba otra funcion que la retorne
use ambas en el programa principal
*/
#include <stdio.h>
void edad();
int imprimiredad2();
 void main(){
    edad();
    int edad = imprimiredad2(); // asignacion de funciones
    printf(" Tienes %d años de edad\n", edad);
    printf(" Tienes %d años de edad\n", imprimiredad2());
 }
 void edad (){
    int añoa = 2025;
    int añon = 2006;
    int edad = añoa-añon;
    printf(" Tienes %d años de edad\n", edad);
 }
 int imprimiredad2(){ //tipo procedimiento/procedures (no retorna nada como void)
    int añoa = 2025;
    int añon = 1950;
    int edad = añoa-añon;
    return edad;

 }
