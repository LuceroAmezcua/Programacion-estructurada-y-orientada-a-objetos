//Calculadora que use dos numeros
#include <stdio.h>
int suma();
int resta();
int mult();
int n1 = 50;
int n2 = 6;
float div();
void main(){
    suma();
    resta();
    mult();
    div ();
}
int suma(){
    int suma= n1 + n2;
    printf("%d + %d = %d\n", n1, n2, suma);
}
int resta(){
    int resta= n1 - n2;
    printf("%d - %d = %d\n", n1, n2, resta);
}

int mult(){
    int mult= n1 * n2;
    printf("%d * %d = %d\n", n1, n2, mult);
}
float div(){
    float div= (float) n1/n2; //casting explicito (Implicito es no ponerle nada)
    printf("%d / %d = %f\n", n1, n2, div);
}